// Generated by gencpp from file baxter_core_msgs/CameraControl.msg
// DO NOT EDIT!


#ifndef BAXTER_CORE_MSGS_MESSAGE_CAMERACONTROL_H
#define BAXTER_CORE_MSGS_MESSAGE_CAMERACONTROL_H


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
struct CameraControl_
{
  typedef CameraControl_<ContainerAllocator> Type;

  CameraControl_()
    : id(0)
    , value(0)  {
    }
  CameraControl_(const ContainerAllocator& _alloc)
    : id(0)
    , value(0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _value_type;
  _value_type value;



// reducing the odds to have name collisions with Windows.h
#if defined(_WIN32) && defined(CAMERA_CONTROL_EXPOSURE)
  #undef CAMERA_CONTROL_EXPOSURE
#endif
#if defined(_WIN32) && defined(CAMERA_CONTROL_GAIN)
  #undef CAMERA_CONTROL_GAIN
#endif
#if defined(_WIN32) && defined(CAMERA_CONTROL_WHITE_BALANCE_R)
  #undef CAMERA_CONTROL_WHITE_BALANCE_R
#endif
#if defined(_WIN32) && defined(CAMERA_CONTROL_WHITE_BALANCE_G)
  #undef CAMERA_CONTROL_WHITE_BALANCE_G
#endif
#if defined(_WIN32) && defined(CAMERA_CONTROL_WHITE_BALANCE_B)
  #undef CAMERA_CONTROL_WHITE_BALANCE_B
#endif
#if defined(_WIN32) && defined(CAMERA_CONTROL_WINDOW_X)
  #undef CAMERA_CONTROL_WINDOW_X
#endif
#if defined(_WIN32) && defined(CAMERA_CONTROL_WINDOW_Y)
  #undef CAMERA_CONTROL_WINDOW_Y
#endif
#if defined(_WIN32) && defined(CAMERA_CONTROL_FLIP)
  #undef CAMERA_CONTROL_FLIP
#endif
#if defined(_WIN32) && defined(CAMERA_CONTROL_MIRROR)
  #undef CAMERA_CONTROL_MIRROR
#endif
#if defined(_WIN32) && defined(CAMERA_CONTROL_RESOLUTION_HALF)
  #undef CAMERA_CONTROL_RESOLUTION_HALF
#endif

  enum {
    CAMERA_CONTROL_EXPOSURE = 100,
    CAMERA_CONTROL_GAIN = 101,
    CAMERA_CONTROL_WHITE_BALANCE_R = 102,
    CAMERA_CONTROL_WHITE_BALANCE_G = 103,
    CAMERA_CONTROL_WHITE_BALANCE_B = 104,
    CAMERA_CONTROL_WINDOW_X = 105,
    CAMERA_CONTROL_WINDOW_Y = 106,
    CAMERA_CONTROL_FLIP = 107,
    CAMERA_CONTROL_MIRROR = 108,
    CAMERA_CONTROL_RESOLUTION_HALF = 109,
  };


  typedef boost::shared_ptr< ::baxter_core_msgs::CameraControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_core_msgs::CameraControl_<ContainerAllocator> const> ConstPtr;

}; // struct CameraControl_

typedef ::baxter_core_msgs::CameraControl_<std::allocator<void> > CameraControl;

typedef boost::shared_ptr< ::baxter_core_msgs::CameraControl > CameraControlPtr;
typedef boost::shared_ptr< ::baxter_core_msgs::CameraControl const> CameraControlConstPtr;

// constants requiring out of line definition























template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_core_msgs::CameraControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_core_msgs::CameraControl_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::baxter_core_msgs::CameraControl_<ContainerAllocator1> & lhs, const ::baxter_core_msgs::CameraControl_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::baxter_core_msgs::CameraControl_<ContainerAllocator1> & lhs, const ::baxter_core_msgs::CameraControl_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace baxter_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::CameraControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::CameraControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::CameraControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::CameraControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::CameraControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::CameraControl_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_core_msgs::CameraControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "01e38dd67dfb36af457f0915248629d1";
  }

  static const char* value(const ::baxter_core_msgs::CameraControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x01e38dd67dfb36afULL;
  static const uint64_t static_value2 = 0x457f0915248629d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_core_msgs::CameraControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_core_msgs/CameraControl";
  }

  static const char* value(const ::baxter_core_msgs::CameraControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_core_msgs::CameraControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32   id\n"
"int32   value\n"
"\n"
"int32 CAMERA_CONTROL_EXPOSURE=100\n"
"int32 CAMERA_CONTROL_GAIN=101\n"
"int32 CAMERA_CONTROL_WHITE_BALANCE_R=102\n"
"int32 CAMERA_CONTROL_WHITE_BALANCE_G=103\n"
"int32 CAMERA_CONTROL_WHITE_BALANCE_B=104\n"
"int32 CAMERA_CONTROL_WINDOW_X=105\n"
"int32 CAMERA_CONTROL_WINDOW_Y=106\n"
"int32 CAMERA_CONTROL_FLIP=107\n"
"int32 CAMERA_CONTROL_MIRROR=108\n"
"int32 CAMERA_CONTROL_RESOLUTION_HALF=109\n"
;
  }

  static const char* value(const ::baxter_core_msgs::CameraControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_core_msgs::CameraControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CameraControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_core_msgs::CameraControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_core_msgs::CameraControl_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_CORE_MSGS_MESSAGE_CAMERACONTROL_H
