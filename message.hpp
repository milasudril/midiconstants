//@	{
//@	"targets":
//@		[{
//@		 "name":"message.hpp","type":"include"
//@		,"include_targets":["controlcodes.hpp","statuscodes.hpp"]
//@		}]
//@	}
/* Copyright 2017 Torbjörn Rathsman

 Redistribution and use in source and binary forms, with or without modification, are permitted
 provided that the following conditions are met:

 1. Redistributions of source code must retain the above copyright notice, this list of conditions
    and the following disclaimer.

 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions
    and the following disclaimer in the documentation and/or other materials provided with the
    distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR 
IMPLIED WARRANTIES, INCLUDING, BUTNOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef MIDICONSTANTS_MESSAGE_HPP
#define MIDICONSTANTS_MESSAGE_HPP

#include <cstdint>
#include <cassert>

namespace MIDIConstants
	{
	class Message
		{
		public:
			Message() noexcept
				{m_content.data=0;}

			Message(ControlCodes ctrl_val,int channel,int value) noexcept
				{
				m_content.data=0;
				m_content.bytes[0]=channel|static_cast<uint8_t>(StatusCodes::CONTROL_CHANGE);
				m_content.bytes[1]=static_cast<uint8_t>(ctrl_val);
				m_content.bytes[2]=value;
				assert(channelMessage());
				}


			Message(StatusCodes status,int channel,int v1,int v2) noexcept
				{
				m_content.data=0;
				m_content.bytes[0]=channel|static_cast<uint8_t>(status);
				m_content.bytes[1]=v1;
				m_content.bytes[2]=v2;
				assert(channelMessage());
				}

			Message(StatusCodes status,int v1,int v2) noexcept
				{
				m_content.data=0;
				m_content.bytes[0]=static_cast<uint8_t>(status);
				m_content.bytes[1]=v1;
				m_content.bytes[2]=v2;
				assert(!channelMessage());
				}

			Message(int v0,int v1,int v2) noexcept
				{
				m_content.data=0;
				m_content.bytes[0]=v0;
				m_content.bytes[1]=v1;
				m_content.bytes[2]=v2;
				}

			StatusCodes status() const noexcept
				{
				if(channelMessage())
					{return static_cast<StatusCodes>(m_content.bytes[0]&0xf0);}
				return static_cast<StatusCodes>(m_content.bytes[0]);
				}

			ControlCodes ctrlCode() const noexcept
				{return static_cast<ControlCodes>( m_content.bytes[1] );}

			int channel() const noexcept
				{return m_content.bytes[0]&0x0f;}

			uint8_t statusRaw() const noexcept
				{return m_content.bytes[0];}

			uint8_t value1() const noexcept
				{return m_content.bytes[1];}

			uint8_t value2() const noexcept
				{return m_content.bytes[2];}

			bool channelMessage() const noexcept
				{return m_content.bytes[0] < 0xf0;}

			bool valid() const noexcept
				{return m_content.data!=0;}

			void clear() noexcept
				{m_content.data=0;}


		private:
			union Content
				{
				int32_t data;
				uint8_t bytes[4];
				} m_content;
		};
	}

#endif
