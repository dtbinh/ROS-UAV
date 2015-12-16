// Generated by gencpp from file vrep_common/simRosCreateDummyResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSCREATEDUMMYRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSCREATEDUMMYRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrep_common
{
template <class ContainerAllocator>
struct simRosCreateDummyResponse_
{
  typedef simRosCreateDummyResponse_<ContainerAllocator> Type;

  simRosCreateDummyResponse_()
    : dummyHandle(0)  {
    }
  simRosCreateDummyResponse_(const ContainerAllocator& _alloc)
    : dummyHandle(0)  {
    }



   typedef int32_t _dummyHandle_type;
  _dummyHandle_type dummyHandle;




  typedef boost::shared_ptr< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosCreateDummyResponse_

typedef ::vrep_common::simRosCreateDummyResponse_<std::allocator<void> > simRosCreateDummyResponse;

typedef boost::shared_ptr< ::vrep_common::simRosCreateDummyResponse > simRosCreateDummyResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosCreateDummyResponse const> simRosCreateDummyResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/andrew/catkin_ws/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fce6fe642297751ba64c68708ffe9e6f";
  }

  static const char* value(const ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfce6fe642297751bULL;
  static const uint64_t static_value2 = 0xa64c68708ffe9e6fULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosCreateDummyResponse";
  }

  static const char* value(const ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 dummyHandle\n\
\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dummyHandle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosCreateDummyResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosCreateDummyResponse_<ContainerAllocator>& v)
  {
    s << indent << "dummyHandle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dummyHandle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSCREATEDUMMYRESPONSE_H
