#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocSetReflectorsForSupportActiveSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCSETREFLECTORSFORSUPPORTACTIVESRV_H
#define SICK_SCAN_MESSAGE_SICKLOCSETREFLECTORSFORSUPPORTACTIVESRV_H

#include <ros/service_traits.h>


#include <sick_scan_xd/SickLocSetReflectorsForSupportActiveSrvRequest.h>
#include <sick_scan_xd/SickLocSetReflectorsForSupportActiveSrvResponse.h>


namespace sick_scan_xd
{

struct SickLocSetReflectorsForSupportActiveSrv
{

typedef SickLocSetReflectorsForSupportActiveSrvRequest Request;
typedef SickLocSetReflectorsForSupportActiveSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocSetReflectorsForSupportActiveSrv
} // namespace sick_scan_xd


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrv > {
  static const char* value()
  {
    return "83465e5956f4615e09223f5d055d1f12";
  }

  static const char* value(const ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocSetReflectorsForSupportActiveSrv";
  }

  static const char* value(const ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrvRequest> should match
// service_traits::DataType< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrv >
template<>
struct DataType< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrvResponse> should match
// service_traits::DataType< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrv >
template<>
struct DataType< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocSetReflectorsForSupportActiveSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCSETREFLECTORSFORSUPPORTACTIVESRV_H
