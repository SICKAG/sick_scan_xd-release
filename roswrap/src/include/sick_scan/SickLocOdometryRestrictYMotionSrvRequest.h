// Generated by gencpp from file sick_scan/SickLocOdometryRestrictYMotionSrvRequest.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCODOMETRYRESTRICTYMOTIONSRVREQUEST_H
#define SICK_SCAN_MESSAGE_SICKLOCODOMETRYRESTRICTYMOTIONSRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sick_scan
{
template <class ContainerAllocator>
struct SickLocOdometryRestrictYMotionSrvRequest_
{
  typedef SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> Type;

  SickLocOdometryRestrictYMotionSrvRequest_()
    {
    }
  SickLocOdometryRestrictYMotionSrvRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef std::shared_ptr< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocOdometryRestrictYMotionSrvRequest_

typedef ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<std::allocator<void> > SickLocOdometryRestrictYMotionSrvRequest;

typedef std::shared_ptr< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest > SickLocOdometryRestrictYMotionSrvRequestPtr;
typedef std::shared_ptr< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest const> SickLocOdometryRestrictYMotionSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace sick_scan

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLocOdometryRestrictYMotionSrvRequest";
  }

  static const char* value(const ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of ROS service SickLocOdometryRestrictYMotion for sick localization\n"
"# Returns the variable that Indicates that the vehicle will be able to move in Y-Direction or not. If true the mounting pose of the sensor matters. For omnidirektional vehicles this must be set to false.\n"
"# Example call (ROS1):\n"
"# rosservice call SickLocOdometryRestrictYMotion \"{}\"\n"
"# Example call (ROS2):\n"
"# ros2 service call SickLocOdometryRestrictYMotion sick_scan/srv/SickLocOdometryRestrictYMotionSrv \"{}\"\n"
"# \n"
"\n"
"# \n"
"# Request (input)\n"
"# \n"
"\n"
;
  }

  static const char* value(const ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocOdometryRestrictYMotionSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::sick_scan::SickLocOdometryRestrictYMotionSrvRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SICK_SCAN_MESSAGE_SICKLOCODOMETRYRESTRICTYMOTIONSRVREQUEST_H