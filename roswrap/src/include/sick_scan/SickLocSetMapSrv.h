// Generated by gencpp from file sick_scan/SickLocSetMapSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCSETMAPSRV_H
#define SICK_SCAN_MESSAGE_SICKLOCSETMAPSRV_H

#include <ros/service_traits.h>


#include <sick_scan/SickLocSetMapSrvRequest.h>
#include <sick_scan/SickLocSetMapSrvResponse.h>


namespace sick_scan
{

struct SickLocSetMapSrv
{

typedef SickLocSetMapSrvRequest Request;
typedef SickLocSetMapSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocSetMapSrv
} // namespace sick_scan


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SickLocSetMapSrv > {
  static const char* value()
  {
    return "958b96f70d178298728ecb5632bbe5c5";
  }

  static const char* value(const ::sick_scan::SickLocSetMapSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SickLocSetMapSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocSetMapSrv";
  }

  static const char* value(const ::sick_scan::SickLocSetMapSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SickLocSetMapSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SickLocSetMapSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocSetMapSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocSetMapSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetMapSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocSetMapSrvRequest> should match
// service_traits::DataType< ::sick_scan::SickLocSetMapSrv >
template<>
struct DataType< ::sick_scan::SickLocSetMapSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocSetMapSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetMapSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SickLocSetMapSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SickLocSetMapSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocSetMapSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocSetMapSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetMapSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocSetMapSrvResponse> should match
// service_traits::DataType< ::sick_scan::SickLocSetMapSrv >
template<>
struct DataType< ::sick_scan::SickLocSetMapSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocSetMapSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocSetMapSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SICK_SCAN_MESSAGE_SICKLOCSETMAPSRV_H