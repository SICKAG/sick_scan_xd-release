#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocIsSystemReadySrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCISSYSTEMREADYSRV_H
#define SICK_SCAN_MESSAGE_SICKLOCISSYSTEMREADYSRV_H

#include <ros/service_traits.h>


#include <sick_scan_xd/SickLocIsSystemReadySrvRequest.h>
#include <sick_scan_xd/SickLocIsSystemReadySrvResponse.h>


namespace sick_scan_xd
{

struct SickLocIsSystemReadySrv
{

typedef SickLocIsSystemReadySrvRequest Request;
typedef SickLocIsSystemReadySrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocIsSystemReadySrv
} // namespace sick_scan_xd


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan_xd::SickLocIsSystemReadySrv > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::sick_scan_xd::SickLocIsSystemReadySrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan_xd::SickLocIsSystemReadySrv > {
  static const char* value()
  {
    return "sick_scan/SickLocIsSystemReadySrv";
  }

  static const char* value(const ::sick_scan_xd::SickLocIsSystemReadySrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan_xd::SickLocIsSystemReadySrvRequest> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocIsSystemReadySrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocIsSystemReadySrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocIsSystemReadySrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocIsSystemReadySrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocIsSystemReadySrvRequest> should match
// service_traits::DataType< ::sick_scan_xd::SickLocIsSystemReadySrv >
template<>
struct DataType< ::sick_scan_xd::SickLocIsSystemReadySrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocIsSystemReadySrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocIsSystemReadySrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan_xd::SickLocIsSystemReadySrvResponse> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocIsSystemReadySrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocIsSystemReadySrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocIsSystemReadySrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocIsSystemReadySrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocIsSystemReadySrvResponse> should match
// service_traits::DataType< ::sick_scan_xd::SickLocIsSystemReadySrv >
template<>
struct DataType< ::sick_scan_xd::SickLocIsSystemReadySrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocIsSystemReadySrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocIsSystemReadySrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCISSYSTEMREADYSRV_H
