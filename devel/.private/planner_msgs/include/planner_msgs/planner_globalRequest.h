// Generated by gencpp from file planner_msgs/planner_globalRequest.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_GLOBALREQUEST_H
#define PLANNER_MSGS_MESSAGE_PLANNER_GLOBALREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace planner_msgs
{
template <class ContainerAllocator>
struct planner_globalRequest_
{
  typedef planner_globalRequest_<ContainerAllocator> Type;

  planner_globalRequest_()
    : id(0)
    , not_check_frontier(false)
    , ignore_time(false)  {
    }
  planner_globalRequest_(const ContainerAllocator& _alloc)
    : id(0)
    , not_check_frontier(false)
    , ignore_time(false)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef uint8_t _not_check_frontier_type;
  _not_check_frontier_type not_check_frontier;

   typedef uint8_t _ignore_time_type;
  _ignore_time_type ignore_time;





  typedef boost::shared_ptr< ::planner_msgs::planner_globalRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planner_globalRequest_<ContainerAllocator> const> ConstPtr;

}; // struct planner_globalRequest_

typedef ::planner_msgs::planner_globalRequest_<std::allocator<void> > planner_globalRequest;

typedef boost::shared_ptr< ::planner_msgs::planner_globalRequest > planner_globalRequestPtr;
typedef boost::shared_ptr< ::planner_msgs::planner_globalRequest const> planner_globalRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planner_globalRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planner_globalRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::planner_globalRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_globalRequest_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.not_check_frontier == rhs.not_check_frontier &&
    lhs.ignore_time == rhs.ignore_time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::planner_globalRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_globalRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_globalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_globalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_globalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_globalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_globalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_globalRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planner_globalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "adaa0993f3517b8220218b80eee72946";
  }

  static const char* value(const ::planner_msgs::planner_globalRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xadaa0993f3517b82ULL;
  static const uint64_t static_value2 = 0x20218b80eee72946ULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planner_globalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planner_globalRequest";
  }

  static const char* value(const ::planner_msgs::planner_globalRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planner_globalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Request the planner to run and return a path\n"
"# Since the global planner solution is almost deterministic,\n"
"# we could choose which frontier (using its id) from the best one to execute.\n"
"# By default, id 0 means selecting the best one.\n"
"int32 id\n"
"# Don't check for frontier properties (e.g. leaf vertex, gain, ...)\n"
"# This could be used to find a path to any vertex in the graph\n"
"bool not_check_frontier\n"
"# Force the planner to provide the path regardless the time budget.\n"
"bool ignore_time\n"
;
  }

  static const char* value(const ::planner_msgs::planner_globalRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planner_globalRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.not_check_frontier);
      stream.next(m.ignore_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planner_globalRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planner_globalRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::planner_globalRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "not_check_frontier: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.not_check_frontier);
    s << indent << "ignore_time: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ignore_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_GLOBALREQUEST_H
