#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickDevSetIMUActiveSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKDEVSETIMUACTIVESRV_H
#define SICK_SCAN_MESSAGE_SICKDEVSETIMUACTIVESRV_H

#include <ros/service_traits.h>


#include <sick_scan_xd/SickDevSetIMUActiveSrvRequest.h>
#include <sick_scan_xd/SickDevSetIMUActiveSrvResponse.h>


namespace sick_scan_xd
{

struct SickDevSetIMUActiveSrv
{

typedef SickDevSetIMUActiveSrvRequest Request;
typedef SickDevSetIMUActiveSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickDevSetIMUActiveSrv
} // namespace sick_scan_xd


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan_xd::SickDevSetIMUActiveSrv > {
  static const char* value()
  {
    return "83465e5956f4615e09223f5d055d1f12";
  }

  static const char* value(const ::sick_scan_xd::SickDevSetIMUActiveSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan_xd::SickDevSetIMUActiveSrv > {
  static const char* value()
  {
    return "sick_scan/SickDevSetIMUActiveSrv";
  }

  static const char* value(const ::sick_scan_xd::SickDevSetIMUActiveSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan_xd::SickDevSetIMUActiveSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickDevSetIMUActiveSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickDevSetIMUActiveSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickDevSetIMUActiveSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickDevSetIMUActiveSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickDevSetIMUActiveSrvRequest> should match
// service_traits::DataType< ::sick_scan_xd::SickDevSetIMUActiveSrv >
template<>
struct DataType< ::sick_scan_xd::SickDevSetIMUActiveSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickDevSetIMUActiveSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickDevSetIMUActiveSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan_xd::SickDevSetIMUActiveSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickDevSetIMUActiveSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickDevSetIMUActiveSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickDevSetIMUActiveSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickDevSetIMUActiveSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickDevSetIMUActiveSrvResponse> should match
// service_traits::DataType< ::sick_scan_xd::SickDevSetIMUActiveSrv >
template<>
struct DataType< ::sick_scan_xd::SickDevSetIMUActiveSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickDevSetIMUActiveSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickDevSetIMUActiveSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKDEVSETIMUACTIVESRV_H
