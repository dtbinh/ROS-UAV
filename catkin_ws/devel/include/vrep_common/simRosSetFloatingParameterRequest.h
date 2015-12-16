// Generated by gencpp from file vrep_common/simRosSetFloatingParameterRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSSETFLOATINGPARAMETERREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSSETFLOATINGPARAMETERREQUEST_H


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
struct simRosSetFloatingParameterRequest_
{
  typedef simRosSetFloatingParameterRequest_<ContainerAllocator> Type;

  simRosSetFloatingParameterRequest_()
    : parameter(0)
    , parameterValue(0.0)  {
    }
  simRosSetFloatingParameterRequest_(const ContainerAllocator& _alloc)
    : parameter(0)
    , parameterValue(0.0)  {
    }



   typedef int32_t _parameter_type;
  _parameter_type parameter;

   typedef float _parameterValue_type;
  _parameterValue_type parameterValue;




  typedef boost::shared_ptr< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosSetFloatingParameterRequest_

typedef ::vrep_common::simRosSetFloatingParameterRequest_<std::allocator<void> > simRosSetFloatingParameterRequest;

typedef boost::shared_ptr< ::vrep_common::simRosSetFloatingParameterRequest > simRosSetFloatingParameterRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosSetFloatingParameterRequest const> simRosSetFloatingParameterRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "570e61d21d53bf62d540d6da5ff10ceb";
  }

  static const char* value(const ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x570e61d21d53bf62ULL;
  static const uint64_t static_value2 = 0xd540d6da5ff10cebULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosSetFloatingParameterRequest";
  }

  static const char* value(const ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 parameter\n\
float32 parameterValue\n\
";
  }

  static const char* value(const ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.parameter);
      stream.next(m.parameterValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosSetFloatingParameterRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosSetFloatingParameterRequest_<ContainerAllocator>& v)
  {
    s << indent << "parameter: ";
    Printer<int32_t>::stream(s, indent + "  ", v.parameter);
    s << indent << "parameterValue: ";
    Printer<float>::stream(s, indent + "  ", v.parameterValue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSSETFLOATINGPARAMETERREQUEST_H
