#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocTimeSyncSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCTIMESYNCSRV_H
#define SICK_SCAN_MESSAGE_SICKLOCTIMESYNCSRV_H

#include <ros/service_traits.h>


#include <sick_scan_xd/SickLocTimeSyncSrvRequest.h>
#include <sick_scan_xd/SickLocTimeSyncSrvResponse.h>


namespace sick_scan_xd
{

struct SickLocTimeSyncSrv
{

typedef SickLocTimeSyncSrvRequest Request;
typedef SickLocTimeSyncSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocTimeSyncSrv
} // namespace sick_scan_xd


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan_xd::SickLocTimeSyncSrv > {
  static const char* value()
  {
    return "216ce2f222e12099ae0a51b3bd3cad26";
  }

  static const char* value(const ::sick_scan_xd::SickLocTimeSyncSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan_xd::SickLocTimeSyncSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocTimeSyncSrv";
  }

  static const char* value(const ::sick_scan_xd::SickLocTimeSyncSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan_xd::SickLocTimeSyncSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocTimeSyncSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocTimeSyncSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocTimeSyncSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocTimeSyncSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocTimeSyncSrvRequest> should match
// service_traits::DataType< ::sick_scan_xd::SickLocTimeSyncSrv >
template<>
struct DataType< ::sick_scan_xd::SickLocTimeSyncSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocTimeSyncSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocTimeSyncSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan_xd::SickLocTimeSyncSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocTimeSyncSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocTimeSyncSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocTimeSyncSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocTimeSyncSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocTimeSyncSrvResponse> should match
// service_traits::DataType< ::sick_scan_xd::SickLocTimeSyncSrv >
template<>
struct DataType< ::sick_scan_xd::SickLocTimeSyncSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocTimeSyncSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocTimeSyncSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCTIMESYNCSRV_H
