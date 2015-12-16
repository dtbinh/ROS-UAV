// Generated by gencpp from file mofs/output.msg
// DO NOT EDIT!


#ifndef MOFS_MESSAGE_OUTPUT_H
#define MOFS_MESSAGE_OUTPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mofs
{
template <class ContainerAllocator>
struct output_
{
  typedef output_<ContainerAllocator> Type;

  output_()
    : value(0.0)  {
    }
  output_(const ContainerAllocator& _alloc)
    : value(0.0)  {
    }



   typedef float _value_type;
  _value_type value;




  typedef boost::shared_ptr< ::mofs::output_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mofs::output_<ContainerAllocator> const> ConstPtr;

}; // struct output_

typedef ::mofs::output_<std::allocator<void> > output;

typedef boost::shared_ptr< ::mofs::output > outputPtr;
typedef boost::shared_ptr< ::mofs::output const> outputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mofs::output_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mofs::output_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mofs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'mofs': ['/home/andrew/catkin_ws/src/mofs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mofs::output_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mofs::output_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mofs::output_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mofs::output_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mofs::output_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mofs::output_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mofs::output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0aca93dcf6d857f0e5a0dc6be1eaa9fb";
  }

  static const char* value(const ::mofs::output_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0aca93dcf6d857f0ULL;
  static const uint64_t static_value2 = 0xe5a0dc6be1eaa9fbULL;
};

template<class ContainerAllocator>
struct DataType< ::mofs::output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mofs/output";
  }

  static const char* value(const ::mofs::output_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mofs::output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 value\n\
";
  }

  static const char* value(const ::mofs::output_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mofs::output_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct output_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mofs::output_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mofs::output_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<float>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOFS_MESSAGE_OUTPUT_H
