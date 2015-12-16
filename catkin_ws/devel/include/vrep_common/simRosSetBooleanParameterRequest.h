// Generated by gencpp from file vrep_common/simRosSetBooleanParameterRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSSETBOOLEANPARAMETERREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSSETBOOLEANPARAMETERREQUEST_H


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
struct simRosSetBooleanParameterRequest_
{
  typedef simRosSetBooleanParameterRequest_<ContainerAllocator> Type;

  simRosSetBooleanParameterRequest_()
    : parameter(0)
    , parameterValue(0)  {
    }
  simRosSetBooleanParameterRequest_(const ContainerAllocator& _alloc)
    : parameter(0)
    , parameterValue(0)  {
    }



   typedef int32_t _parameter_type;
  _parameter_type parameter;

   typedef uint8_t _parameterValue_type;
  _parameterValue_type parameterValue;




  typedef boost::shared_ptr< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosSetBooleanParameterRequest_

typedef ::vrep_common::simRosSetBooleanParameterRequest_<std::allocator<void> > simRosSetBooleanParameterRequest;

typedef boost::shared_ptr< ::vrep_common::simRosSetBooleanParameterRequest > simRosSetBooleanParameterRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosSetBooleanParameterRequest const> simRosSetBooleanParameterRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "10fa8f42f19dd4cbb2be19bb12f6a724";
  }

  static const char* value(const ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x10fa8f42f19dd4cbULL;
  static const uint64_t static_value2 = 0xb2be19bb12f6a724ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosSetBooleanParameterRequest";
  }

  static const char* value(const ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 parameter\n\
uint8 parameterValue\n\
";
  }

  static const char* value(const ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.parameter);
      stream.next(m.parameterValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosSetBooleanParameterRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosSetBooleanParameterRequest_<ContainerAllocator>& v)
  {
    s << indent << "parameter: ";
    Printer<int32_t>::stream(s, indent + "  ", v.parameter);
    s << indent << "parameterValue: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.parameterValue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSSETBOOLEANPARAMETERREQUEST_H
