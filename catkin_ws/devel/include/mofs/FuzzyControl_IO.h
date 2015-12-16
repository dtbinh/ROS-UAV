// Generated by gencpp from file mofs/FuzzyControl_IO.msg
// DO NOT EDIT!


#ifndef MOFS_MESSAGE_FUZZYCONTROL_IO_H
#define MOFS_MESSAGE_FUZZYCONTROL_IO_H

#include <ros/service_traits.h>


#include <mofs/FuzzyControl_IORequest.h>
#include <mofs/FuzzyControl_IOResponse.h>


namespace mofs
{

struct FuzzyControl_IO
{

typedef FuzzyControl_IORequest Request;
typedef FuzzyControl_IOResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct FuzzyControl_IO
} // namespace mofs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mofs::FuzzyControl_IO > {
  static const char* value()
  {
    return "fba685fbdda96b6ff62d5238836ec32a";
  }

  static const char* value(const ::mofs::FuzzyControl_IO&) { return value(); }
};

template<>
struct DataType< ::mofs::FuzzyControl_IO > {
  static const char* value()
  {
    return "mofs/FuzzyControl_IO";
  }

  static const char* value(const ::mofs::FuzzyControl_IO&) { return value(); }
};


// service_traits::MD5Sum< ::mofs::FuzzyControl_IORequest> should match 
// service_traits::MD5Sum< ::mofs::FuzzyControl_IO > 
template<>
struct MD5Sum< ::mofs::FuzzyControl_IORequest>
{
  static const char* value()
  {
    return MD5Sum< ::mofs::FuzzyControl_IO >::value();
  }
  static const char* value(const ::mofs::FuzzyControl_IORequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mofs::FuzzyControl_IORequest> should match 
// service_traits::DataType< ::mofs::FuzzyControl_IO > 
template<>
struct DataType< ::mofs::FuzzyControl_IORequest>
{
  static const char* value()
  {
    return DataType< ::mofs::FuzzyControl_IO >::value();
  }
  static const char* value(const ::mofs::FuzzyControl_IORequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mofs::FuzzyControl_IOResponse> should match 
// service_traits::MD5Sum< ::mofs::FuzzyControl_IO > 
template<>
struct MD5Sum< ::mofs::FuzzyControl_IOResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mofs::FuzzyControl_IO >::value();
  }
  static const char* value(const ::mofs::FuzzyControl_IOResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mofs::FuzzyControl_IOResponse> should match 
// service_traits::DataType< ::mofs::FuzzyControl_IO > 
template<>
struct DataType< ::mofs::FuzzyControl_IOResponse>
{
  static const char* value()
  {
    return DataType< ::mofs::FuzzyControl_IO >::value();
  }
  static const char* value(const ::mofs::FuzzyControl_IOResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MOFS_MESSAGE_FUZZYCONTROL_IO_H