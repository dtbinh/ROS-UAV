// Generated by gencpp from file vrep_common/simRosGetObjectSelectionResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETOBJECTSELECTIONRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSGETOBJECTSELECTIONRESPONSE_H


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
struct simRosGetObjectSelectionResponse_
{
  typedef simRosGetObjectSelectionResponse_<ContainerAllocator> Type;

  simRosGetObjectSelectionResponse_()
    : handles()  {
    }
  simRosGetObjectSelectionResponse_(const ContainerAllocator& _alloc)
    : handles(_alloc)  {
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _handles_type;
  _handles_type handles;




  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetObjectSelectionResponse_

typedef ::vrep_common::simRosGetObjectSelectionResponse_<std::allocator<void> > simRosGetObjectSelectionResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetObjectSelectionResponse > simRosGetObjectSelectionResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetObjectSelectionResponse const> simRosGetObjectSelectionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/andrew/catkin_ws/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1b24af430705cefc484ff6cc1c5669ad";
  }

  static const char* value(const ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1b24af430705cefcULL;
  static const uint64_t static_value2 = 0x484ff6cc1c5669adULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetObjectSelectionResponse";
  }

  static const char* value(const ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[] handles\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.handles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosGetObjectSelectionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetObjectSelectionResponse_<ContainerAllocator>& v)
  {
    s << indent << "handles[]" << std::endl;
    for (size_t i = 0; i < v.handles.size(); ++i)
    {
      s << indent << "  handles[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.handles[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETOBJECTSELECTIONRESPONSE_H
