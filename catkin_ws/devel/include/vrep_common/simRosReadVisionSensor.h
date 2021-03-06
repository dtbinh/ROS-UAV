// Generated by gencpp from file vrep_common/simRosReadVisionSensor.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSREADVISIONSENSOR_H
#define VREP_COMMON_MESSAGE_SIMROSREADVISIONSENSOR_H

#include <ros/service_traits.h>


#include <vrep_common/simRosReadVisionSensorRequest.h>
#include <vrep_common/simRosReadVisionSensorResponse.h>


namespace vrep_common
{

struct simRosReadVisionSensor
{

typedef simRosReadVisionSensorRequest Request;
typedef simRosReadVisionSensorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosReadVisionSensor
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosReadVisionSensor > {
  static const char* value()
  {
    return "06a229ce8d1f580db5bd558c65f74c4e";
  }

  static const char* value(const ::vrep_common::simRosReadVisionSensor&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosReadVisionSensor > {
  static const char* value()
  {
    return "vrep_common/simRosReadVisionSensor";
  }

  static const char* value(const ::vrep_common::simRosReadVisionSensor&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosReadVisionSensorRequest> should match 
// service_traits::MD5Sum< ::vrep_common::simRosReadVisionSensor > 
template<>
struct MD5Sum< ::vrep_common::simRosReadVisionSensorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosReadVisionSensor >::value();
  }
  static const char* value(const ::vrep_common::simRosReadVisionSensorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosReadVisionSensorRequest> should match 
// service_traits::DataType< ::vrep_common::simRosReadVisionSensor > 
template<>
struct DataType< ::vrep_common::simRosReadVisionSensorRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosReadVisionSensor >::value();
  }
  static const char* value(const ::vrep_common::simRosReadVisionSensorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosReadVisionSensorResponse> should match 
// service_traits::MD5Sum< ::vrep_common::simRosReadVisionSensor > 
template<>
struct MD5Sum< ::vrep_common::simRosReadVisionSensorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosReadVisionSensor >::value();
  }
  static const char* value(const ::vrep_common::simRosReadVisionSensorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosReadVisionSensorResponse> should match 
// service_traits::DataType< ::vrep_common::simRosReadVisionSensor > 
template<>
struct DataType< ::vrep_common::simRosReadVisionSensorResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosReadVisionSensor >::value();
  }
  static const char* value(const ::vrep_common::simRosReadVisionSensorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSREADVISIONSENSOR_H
