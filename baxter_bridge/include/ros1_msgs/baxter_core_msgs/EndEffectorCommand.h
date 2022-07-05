// Generated by gencpp from file baxter_core_msgs/EndEffectorCommand.msg
// DO NOT EDIT!


#ifndef BAXTER_CORE_MSGS_MESSAGE_ENDEFFECTORCOMMAND_H
#define BAXTER_CORE_MSGS_MESSAGE_ENDEFFECTORCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace baxter_core_msgs
{
template <class ContainerAllocator>
struct EndEffectorCommand_
{
  typedef EndEffectorCommand_<ContainerAllocator> Type;

  EndEffectorCommand_()
    : id(0)
    , command()
    , args()
    , sender()
    , sequence(0)  {
    }
  EndEffectorCommand_(const ContainerAllocator& _alloc)
    : id(0)
    , command(_alloc)
    , args(_alloc)
    , sender(_alloc)
    , sequence(0)  {
  (void)_alloc;
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _args_type;
  _args_type args;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sender_type;
  _sender_type sender;

   typedef uint32_t _sequence_type;
  _sequence_type sequence;



// reducing the odds to have name collisions with Windows.h
#if defined(_WIN32) && defined(CMD_NO_OP)
  #undef CMD_NO_OP
#endif
#if defined(_WIN32) && defined(CMD_SET)
  #undef CMD_SET
#endif
#if defined(_WIN32) && defined(CMD_CONFIGURE)
  #undef CMD_CONFIGURE
#endif
#if defined(_WIN32) && defined(CMD_REBOOT)
  #undef CMD_REBOOT
#endif
#if defined(_WIN32) && defined(CMD_RESET)
  #undef CMD_RESET
#endif
#if defined(_WIN32) && defined(CMD_CALIBRATE)
  #undef CMD_CALIBRATE
#endif
#if defined(_WIN32) && defined(CMD_CLEAR_CALIBRATION)
  #undef CMD_CLEAR_CALIBRATION
#endif
#if defined(_WIN32) && defined(CMD_PREPARE_TO_GRIP)
  #undef CMD_PREPARE_TO_GRIP
#endif
#if defined(_WIN32) && defined(CMD_GRIP)
  #undef CMD_GRIP
#endif
#if defined(_WIN32) && defined(CMD_RELEASE)
  #undef CMD_RELEASE
#endif
#if defined(_WIN32) && defined(CMD_GO)
  #undef CMD_GO
#endif
#if defined(_WIN32) && defined(CMD_STOP)
  #undef CMD_STOP
#endif


  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_NO_OP;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_SET;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_CONFIGURE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_REBOOT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_RESET;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_CALIBRATE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_CLEAR_CALIBRATION;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_PREPARE_TO_GRIP;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_GRIP;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_RELEASE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_GO;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CMD_STOP;

  typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> const> ConstPtr;

}; // struct EndEffectorCommand_

typedef ::baxter_core_msgs::EndEffectorCommand_<std::allocator<void> > EndEffectorCommand;

typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorCommand > EndEffectorCommandPtr;
typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorCommand const> EndEffectorCommandConstPtr;

// constants requiring out of line definition


   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >
      EndEffectorCommand_<ContainerAllocator>::CMD_NO_OP =

          "no_op"

        ;



   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >
      EndEffectorCommand_<ContainerAllocator>::CMD_SET =

          "set"

        ;



   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >
      EndEffectorCommand_<ContainerAllocator>::CMD_CONFIGURE =

          "configure"

        ;



   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >
      EndEffectorCommand_<ContainerAllocator>::CMD_REBOOT =

          "reboot"

        ;



   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >
      EndEffectorCommand_<ContainerAllocator>::CMD_RESET =

          "reset"

        ;



   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >
      EndEffectorCommand_<ContainerAllocator>::CMD_CALIBRATE =

          "calibrate"

        ;



   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >
      EndEffectorCommand_<ContainerAllocator>::CMD_CLEAR_CALIBRATION =

          "clear_calibration"

        ;



   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >
      EndEffectorCommand_<ContainerAllocator>::CMD_PREPARE_TO_GRIP =

          "prepare_to_grip"

        ;



   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >
      EndEffectorCommand_<ContainerAllocator>::CMD_GRIP =

          "grip"

        ;



   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >
      EndEffectorCommand_<ContainerAllocator>::CMD_RELEASE =

          "release"

        ;



   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >
      EndEffectorCommand_<ContainerAllocator>::CMD_GO =

          "go"

        ;



   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >
      EndEffectorCommand_<ContainerAllocator>::CMD_STOP =

          "stop"

        ;




template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator1> & lhs, const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.command == rhs.command &&
    lhs.args == rhs.args &&
    lhs.sender == rhs.sender &&
    lhs.sequence == rhs.sequence;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator1> & lhs, const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace baxter_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c003234e90416f2ca02ac7837c42cbb7";
  }

  static const char* value(const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc003234e90416f2cULL;
  static const uint64_t static_value2 = 0xa02ac7837c42cbb7ULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_core_msgs/EndEffectorCommand";
  }

  static const char* value(const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Command to be sent to an end effector\n"
"uint32 id       # target end effector id\n"
"string command  # operation to perform\n"
"# Well known commands:\n"
"string   CMD_NO_OP           = no_op\n"
"string   CMD_SET             = set\n"
"string   CMD_CONFIGURE       = configure\n"
"string   CMD_REBOOT          = reboot\n"
"string   CMD_RESET           = reset\n"
"string   CMD_CALIBRATE       = calibrate\n"
"string   CMD_CLEAR_CALIBRATION = clear_calibration\n"
"string   CMD_PREPARE_TO_GRIP = prepare_to_grip\n"
"string   CMD_GRIP            = grip\n"
"string   CMD_RELEASE         = release\n"
"string   CMD_GO              = go\n"
"string   CMD_STOP            = stop\n"
"#\n"
"string args     # JSON arguments to the command\n"
"#\n"
"string sender   # optional identifier, returned in state when the command is handled\n"
"uint32 sequence # optional sequence number, return in state when the command is handled\n"
"\n"
;
  }

  static const char* value(const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.command);
      stream.next(m.args);
      stream.next(m.sender);
      stream.next(m.sequence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EndEffectorCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_core_msgs::EndEffectorCommand_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
    s << indent << "args: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.args);
    s << indent << "sender: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sender);
    s << indent << "sequence: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sequence);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_CORE_MSGS_MESSAGE_ENDEFFECTORCOMMAND_H
