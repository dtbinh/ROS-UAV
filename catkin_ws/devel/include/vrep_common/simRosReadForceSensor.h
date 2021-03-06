// Generated by gencpp from file vrep_common/simRosReadForceSensor.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSREADFORCESENSOR_H
#define VREP_COMMON_MESSAGE_SIMROSREADFORCESENSOR_H

#include <ros/service_traits.h>


#include <vrep_common/simRosReadForceSensorRequest.h>
#include <vrep_common/simRosReadForceSensorResponse.h>


namespace vrep_common
{

struct simRosReadForceSensor
{

typedef simRosReadForceSensorRequest Request;
typedef simRosReadForceSensorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosReadForceSensor
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosReadForceSensor > {
  static const char* value()
  {
    return "f2a54a090baac0d8c5c08bb865b8cd2d";
  }

  static const char* value(const ::vrep_common::simRosReadForceSensor&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosReadForceSensor > {
  static const char* value()
  {
    return "vrep_common/simRosReadForceSensor";
  }

  static const char* value(const ::vrep_common::simRosReadForceSensor&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosReadForceSensorRequest> should match 
// service_traits::MD5Sum< ::vrep_common::simRosReadForceSensor > 
template<>
struct MD5Sum< ::vrep_common::simRosReadForceSensorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosReadForceSensor >::value();
  }
  static const char* value(const ::vrep_common::simRosReadForceSensorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosReadForceSensorRequest> should match 
// service_traits::DataType< ::vrep_common::simRosReadForceSensor > 
template<>
struct DataType< ::vrep_common::simRosReadForceSensorRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosReadForceSensor >::value();
  }
  static const char* value(const ::vrep_common::simRosReadForceSensorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosReadForceSensorResponse> should match 
// service_traits::MD5Sum< ::vrep_common::simRosReadForceSensor > 
template<>
struct MD5Sum< ::vrep_common::simRosReadForceSensorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosReadForceSensor >::value();
  }
  static const char* value(const ::vrep_common::simRosReadForceSensorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosReadForceSensorResponse> should match 
// service_traits::DataType< ::vrep_common::simRosReadForceSensor > 
template<>
struct DataType< ::vrep_common::simRosReadForceSensorResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosReadForceSensor >::value();
  }
  static const char* value(const ::vrep_common::simRosReadForceSensorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSREADFORCESENSOR_H
