// Generated by gencpp from file vrep_common/simRosSynchronous.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSSYNCHRONOUS_H
#define VREP_COMMON_MESSAGE_SIMROSSYNCHRONOUS_H

#include <ros/service_traits.h>


#include <vrep_common/simRosSynchronousRequest.h>
#include <vrep_common/simRosSynchronousResponse.h>


namespace vrep_common
{

struct simRosSynchronous
{

typedef simRosSynchronousRequest Request;
typedef simRosSynchronousResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosSynchronous
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosSynchronous > {
  static const char* value()
  {
    return "ee99577c106b55d579549e7b24b16926";
  }

  static const char* value(const ::vrep_common::simRosSynchronous&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosSynchronous > {
  static const char* value()
  {
    return "vrep_common/simRosSynchronous";
  }

  static const char* value(const ::vrep_common::simRosSynchronous&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosSynchronousRequest> should match 
// service_traits::MD5Sum< ::vrep_common::simRosSynchronous > 
template<>
struct MD5Sum< ::vrep_common::simRosSynchronousRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSynchronous >::value();
  }
  static const char* value(const ::vrep_common::simRosSynchronousRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSynchronousRequest> should match 
// service_traits::DataType< ::vrep_common::simRosSynchronous > 
template<>
struct DataType< ::vrep_common::simRosSynchronousRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSynchronous >::value();
  }
  static const char* value(const ::vrep_common::simRosSynchronousRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosSynchronousResponse> should match 
// service_traits::MD5Sum< ::vrep_common::simRosSynchronous > 
template<>
struct MD5Sum< ::vrep_common::simRosSynchronousResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSynchronous >::value();
  }
  static const char* value(const ::vrep_common::simRosSynchronousResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSynchronousResponse> should match 
// service_traits::DataType< ::vrep_common::simRosSynchronous > 
template<>
struct DataType< ::vrep_common::simRosSynchronousResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSynchronous >::value();
  }
  static const char* value(const ::vrep_common::simRosSynchronousResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSSYNCHRONOUS_H
