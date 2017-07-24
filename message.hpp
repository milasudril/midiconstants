//@	{
//@	"targets":
//@		[{
//@		 "name":"message.hpp","type":"include"
//@		,"include_targets":["controlcodes.hpp","statuscodes.hpp"]
//@		}]
//@	}

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
