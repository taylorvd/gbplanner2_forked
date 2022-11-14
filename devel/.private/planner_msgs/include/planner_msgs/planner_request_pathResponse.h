// Generated by gencpp from file planner_msgs/planner_request_pathResponse.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_REQUEST_PATHRESPONSE_H
#define PLANNER_MSGS_MESSAGE_PLANNER_REQUEST_PATHRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <planner_msgs/BoundMode.h>
#include <geometry_msgs/Pose.h>

namespace planner_msgs
{
template <class ContainerAllocator>
struct planner_request_pathResponse_
{
  typedef planner_request_pathResponse_<ContainerAllocator> Type;

  planner_request_pathResponse_()
    : bound()
    , path()  {
    }
  planner_request_pathResponse_(const ContainerAllocator& _alloc)
    : bound(_alloc)
    , path(_alloc)  {
  (void)_alloc;
    }



   typedef  ::planner_msgs::BoundMode_<ContainerAllocator>  _bound_type;
  _bound_type bound;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Pose_<ContainerAllocator> >> _path_type;
  _path_type path;





  typedef boost::shared_ptr< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> const> ConstPtr;

}; // struct planner_request_pathResponse_

typedef ::planner_msgs::planner_request_pathResponse_<std::allocator<void> > planner_request_pathResponse;

typedef boost::shared_ptr< ::planner_msgs::planner_request_pathResponse > planner_request_pathResponsePtr;
typedef boost::shared_ptr< ::planner_msgs::planner_request_pathResponse const> planner_request_pathResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::planner_request_pathResponse_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_request_pathResponse_<ContainerAllocator2> & rhs)
{
  return lhs.bound == rhs.bound &&
    lhs.path == rhs.path;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::planner_request_pathResponse_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_request_pathResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1dad867088c8c204d2077d3355d04150";
  }

  static const char* value(const ::planner_msgs::planner_request_pathResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1dad867088c8c204ULL;
  static const uint64_t static_value2 = 0xd2077d3355d04150ULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planner_request_pathResponse";
  }

  static const char* value(const ::planner_msgs::planner_request_pathResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Return actual bound mode used in planner.\n"
"BoundMode bound\n"
"\n"
"# Return path.\n"
"geometry_msgs/Pose[] path\n"
"\n"
"================================================================================\n"
"MSG: planner_msgs/BoundMode\n"
"# Bound mode of the robot for collision checking, defined in Params/BoundModeType.\n"
"int32 kExtendedBound = 0\n"
"int32 kRelaxedBound = 1\n"
"int32 kMinBound = 2\n"
"int32 kExactBound = 3\n"
"int32 kNoBound = 4\n"
"\n"
"# Set one of above values.\n"
"int32 mode\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::planner_msgs::planner_request_pathResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.bound);
      stream.next(m.path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planner_request_pathResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planner_request_pathResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::planner_request_pathResponse_<ContainerAllocator>& v)
  {
    s << indent << "bound: ";
    s << std::endl;
    Printer< ::planner_msgs::BoundMode_<ContainerAllocator> >::stream(s, indent + "  ", v.bound);
    s << indent << "path[]" << std::endl;
    for (size_t i = 0; i < v.path.size(); ++i)
    {
      s << indent << "  path[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.path[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_REQUEST_PATHRESPONSE_H
