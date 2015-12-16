// Generated by gencpp from file mofs/input.msg
// DO NOT EDIT!


#ifndef MOFS_MESSAGE_INPUT_H
#define MOFS_MESSAGE_INPUT_H


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
struct input_
{
  typedef input_<ContainerAllocator> Type;

  input_()
    : var()  {
      var.assign(0.0);
  }
  input_(const ContainerAllocator& _alloc)
    : var()  {
      var.assign(0.0);
  }



   typedef boost::array<float, 3>  _var_type;
  _var_type var;




  typedef boost::shared_ptr< ::mofs::input_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mofs::input_<ContainerAllocator> const> ConstPtr;

}; // struct input_

typedef ::mofs::input_<std::allocator<void> > input;

typedef boost::shared_ptr< ::mofs::input > inputPtr;
typedef boost::shared_ptr< ::mofs::input const> inputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mofs::input_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mofs::input_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mofs::input_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mofs::input_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mofs::input_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mofs::input_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mofs::input_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mofs::input_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mofs::input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "56cdd81748b0d64da313da623b8bd4e2";
  }

  static const char* value(const ::mofs::input_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x56cdd81748b0d64dULL;
  static const uint64_t static_value2 = 0xa313da623b8bd4e2ULL;
};

template<class ContainerAllocator>
struct DataType< ::mofs::input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mofs/input";
  }

  static const char* value(const ::mofs::input_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mofs::input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[3] var\n\
";
  }

  static const char* value(const ::mofs::input_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mofs::input_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.var);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct input_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mofs::input_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mofs::input_<ContainerAllocator>& v)
  {
    s << indent << "var[]" << std::endl;
    for (size_t i = 0; i < v.var.size(); ++i)
    {
      s << indent << "  var[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.var[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOFS_MESSAGE_INPUT_H
