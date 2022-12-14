// Generated by gencpp from file planner_msgs/planner_geofenceRequest.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_GEOFENCEREQUEST_H
#define PLANNER_MSGS_MESSAGE_PLANNER_GEOFENCEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <planner_msgs/RectangleShape.h>

namespace planner_msgs
{
template <class ContainerAllocator>
struct planner_geofenceRequest_
{
  typedef planner_geofenceRequest_<ContainerAllocator> Type;

  planner_geofenceRequest_()
    : header()
    , rectangles()  {
    }
  planner_geofenceRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , rectangles(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::planner_msgs::RectangleShape_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::planner_msgs::RectangleShape_<ContainerAllocator> >> _rectangles_type;
  _rectangles_type rectangles;





  typedef boost::shared_ptr< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct planner_geofenceRequest_

typedef ::planner_msgs::planner_geofenceRequest_<std::allocator<void> > planner_geofenceRequest;

typedef boost::shared_ptr< ::planner_msgs::planner_geofenceRequest > planner_geofenceRequestPtr;
typedef boost::shared_ptr< ::planner_msgs::planner_geofenceRequest const> planner_geofenceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::planner_geofenceRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_geofenceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.rectangles == rhs.rectangles;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::planner_geofenceRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_geofenceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "925603c266f1903d5583d7c2444661b9";
  }

  static const char* value(const ::planner_msgs::planner_geofenceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x925603c266f1903dULL;
  static const uint64_t static_value2 = 0x5583d7c2444661b9ULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planner_geofenceRequest";
  }

  static const char* value(const ::planner_msgs::planner_geofenceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Add a rectangle to the geofence list.\n"
"Header header\n"
"\n"
"planner_msgs/RectangleShape[] rectangles\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: planner_msgs/RectangleShape\n"
"geometry_msgs/Vector3 center\n"
"geometry_msgs/Vector3 size\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::planner_msgs::planner_geofenceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.rectangles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planner_geofenceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planner_geofenceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::planner_geofenceRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "rectangles[]" << std::endl;
    for (size_t i = 0; i < v.rectangles.size(); ++i)
    {
      s << indent << "  rectangles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::planner_msgs::RectangleShape_<ContainerAllocator> >::stream(s, indent + "    ", v.rectangles[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_GEOFENCEREQUEST_H
