#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SCsoftresetSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SCSOFTRESETSRV_H
#define SICK_SCAN_MESSAGE_SCSOFTRESETSRV_H

#include <ros/service_traits.h>


#include <sick_scan_xd/SCsoftresetSrvRequest.h>
#include <sick_scan_xd/SCsoftresetSrvResponse.h>


namespace sick_scan_xd
{

struct SCsoftresetSrv
{

typedef SCsoftresetSrvRequest Request;
typedef SCsoftresetSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SCsoftresetSrv
} // namespace sick_scan_xd


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan_xd::SCsoftresetSrv > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::sick_scan_xd::SCsoftresetSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan_xd::SCsoftresetSrv > {
  static const char* value()
  {
    return "sick_scan/SCsoftresetSrv";
  }

  static const char* value(const ::sick_scan_xd::SCsoftresetSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan_xd::SCsoftresetSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan_xd::SCsoftresetSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SCsoftresetSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SCsoftresetSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SCsoftresetSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SCsoftresetSrvRequest> should match
// service_traits::DataType< ::sick_scan_xd::SCsoftresetSrv >
template<>
struct DataType< ::sick_scan_xd::SCsoftresetSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SCsoftresetSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SCsoftresetSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan_xd::SCsoftresetSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan_xd::SCsoftresetSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SCsoftresetSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SCsoftresetSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SCsoftresetSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SCsoftresetSrvResponse> should match
// service_traits::DataType< ::sick_scan_xd::SCsoftresetSrv >
template<>
struct DataType< ::sick_scan_xd::SCsoftresetSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SCsoftresetSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SCsoftresetSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SCSOFTRESETSRV_H
