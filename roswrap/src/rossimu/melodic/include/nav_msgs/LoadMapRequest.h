#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file nav_msgs/LoadMapRequest.msg
// DO NOT EDIT!


#ifndef NAV_MSGS_MESSAGE_LOADMAPREQUEST_H
#define NAV_MSGS_MESSAGE_LOADMAPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nav_msgs
{
template <class ContainerAllocator>
struct LoadMapRequest_
{
  typedef LoadMapRequest_<ContainerAllocator> Type;

  LoadMapRequest_()
    : map_url()  {
    }
  LoadMapRequest_(const ContainerAllocator& _alloc)
    : map_url(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _map_url_type;
  _map_url_type map_url;





  typedef std::shared_ptr< ::nav_msgs::LoadMapRequest_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::nav_msgs::LoadMapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LoadMapRequest_

typedef ::nav_msgs::LoadMapRequest_<std::allocator<void> > LoadMapRequest;

typedef std::shared_ptr< ::nav_msgs::LoadMapRequest > LoadMapRequestPtr;
typedef std::shared_ptr< ::nav_msgs::LoadMapRequest const> LoadMapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav_msgs::LoadMapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav_msgs::LoadMapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nav_msgs::LoadMapRequest_<ContainerAllocator1> & lhs, const ::nav_msgs::LoadMapRequest_<ContainerAllocator2> & rhs)
{
  return lhs.map_url == rhs.map_url;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nav_msgs::LoadMapRequest_<ContainerAllocator1> & lhs, const ::nav_msgs::LoadMapRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nav_msgs

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nav_msgs::LoadMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_msgs::LoadMapRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_msgs::LoadMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_msgs::LoadMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_msgs::LoadMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_msgs::LoadMapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav_msgs::LoadMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3813ba1ae85fbcd4dc88c90f1426b90b";
  }

  static const char* value(const ::nav_msgs::LoadMapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3813ba1ae85fbcd4ULL;
  static const uint64_t static_value2 = 0xdc88c90f1426b90bULL;
};

template<class ContainerAllocator>
struct DataType< ::nav_msgs::LoadMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/LoadMapRequest";
  }

  static const char* value(const ::nav_msgs::LoadMapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav_msgs::LoadMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# URL of map resource\n"
"# Can be an absolute path to a file: file:///path/to/maps/floor1.yaml\n"
"# Or, relative to a ROS package: package://my_ros_package/maps/floor2.yaml\n"
"string map_url\n"
;
  }

  static const char* value(const ::nav_msgs::LoadMapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav_msgs::LoadMapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.map_url);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LoadMapRequest_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav_msgs::LoadMapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav_msgs::LoadMapRequest_<ContainerAllocator>& v)
  {
    s << indent << "map_url: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.map_url);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // NAV_MSGS_MESSAGE_LOADMAPREQUEST_H
