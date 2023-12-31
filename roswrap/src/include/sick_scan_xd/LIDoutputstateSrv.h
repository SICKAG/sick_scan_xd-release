#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/LIDoutputstateSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_LIDOUTPUTSTATESRV_H
#define SICK_SCAN_MESSAGE_LIDOUTPUTSTATESRV_H

#include <ros/service_traits.h>


#include <sick_scan_xd/LIDoutputstateSrvRequest.h>
#include <sick_scan_xd/LIDoutputstateSrvResponse.h>


namespace sick_scan_xd
{

struct LIDoutputstateSrv
{

typedef LIDoutputstateSrvRequest Request;
typedef LIDoutputstateSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct LIDoutputstateSrv
} // namespace sick_scan_xd


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan_xd::LIDoutputstateSrv > {
  static const char* value()
  {
    return "83465e5956f4615e09223f5d055d1f12";
  }

  static const char* value(const ::sick_scan_xd::LIDoutputstateSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan_xd::LIDoutputstateSrv > {
  static const char* value()
  {
    return "sick_scan/LIDoutputstateSrv";
  }

  static const char* value(const ::sick_scan_xd::LIDoutputstateSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan_xd::LIDoutputstateSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan_xd::LIDoutputstateSrv >
template<>
struct MD5Sum< ::sick_scan_xd::LIDoutputstateSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::LIDoutputstateSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::LIDoutputstateSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::LIDoutputstateSrvRequest> should match
// service_traits::DataType< ::sick_scan_xd::LIDoutputstateSrv >
template<>
struct DataType< ::sick_scan_xd::LIDoutputstateSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::LIDoutputstateSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::LIDoutputstateSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan_xd::LIDoutputstateSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan_xd::LIDoutputstateSrv >
template<>
struct MD5Sum< ::sick_scan_xd::LIDoutputstateSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::LIDoutputstateSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::LIDoutputstateSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::LIDoutputstateSrvResponse> should match
// service_traits::DataType< ::sick_scan_xd::LIDoutputstateSrv >
template<>
struct DataType< ::sick_scan_xd::LIDoutputstateSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::LIDoutputstateSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::LIDoutputstateSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_LIDOUTPUTSTATESRV_H
