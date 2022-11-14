// Generated by gencpp from file planner_msgs/planner_set_global_boundRequest.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_SET_GLOBAL_BOUNDREQUEST_H
#define PLANNER_MSGS_MESSAGE_PLANNER_SET_GLOBAL_BOUNDREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <planner_msgs/PlanningBound.h>

namespace planner_msgs
{
template <class ContainerAllocator>
struct planner_set_global_boundRequest_
{
  typedef planner_set_global_boundRequest_<ContainerAllocator> Type;

  planner_set_global_boundRequest_()
    : get_current_bound(false)
    , reset_to_default(false)
    , bound()  {
    }
  planner_set_global_boundRequest_(const ContainerAllocator& _alloc)
    : get_current_bound(false)
    , reset_to_default(false)
    , bound(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _get_current_bound_type;
  _get_current_bound_type get_current_bound;

   typedef uint8_t _reset_to_default_type;
  _reset_to_default_type reset_to_default;

   typedef  ::planner_msgs::PlanningBound_<ContainerAllocator>  _bound_type;
  _bound_type bound;





  typedef boost::shared_ptr< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> const> ConstPtr;

}; // struct planner_set_global_boundRequest_

typedef ::planner_msgs::planner_set_global_boundRequest_<std::allocator<void> > planner_set_global_boundRequest;

typedef boost::shared_ptr< ::planner_msgs::planner_set_global_boundRequest > planner_set_global_boundRequestPtr;
typedef boost::shared_ptr< ::planner_msgs::planner_set_global_boundRequest const> planner_set_global_boundRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator2> & rhs)
{
  return lhs.get_current_bound == rhs.get_current_bound &&
    lhs.reset_to_default == rhs.reset_to_default &&
    lhs.bound == rhs.bound;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator1> & lhs, const ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "38c5d4237e29fac0ecaa633679ffb75a";
  }

  static const char* value(const ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x38c5d4237e29fac0ULL;
  static const uint64_t static_value2 = 0xecaa633679ffb75aULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planner_set_global_boundRequest";
  }

  static const char* value(const ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# get_current_bound:\n"
"#   true: get current bound, nothing to set\n"
"#   false: set bound then returns the latest bound\n"
"bool get_current_bound\n"
"\n"
"# reset_to_default:\n"
"#   true:  reset to the default bounding box\n"
"#   false: set new bounding box\n"
"bool reset_to_default\n"
"\n"
"planner_msgs/PlanningBound bound\n"
"\n"
"================================================================================\n"
"MSG: planner_msgs/PlanningBound\n"
"# use_z_val\n"
"#    true:  all x, y, z coordinate\n"
"#    false: change only x, y coodinates\n"
"bool use_z_val\n"
"\n"
"# Bottom left corner\n"
"geometry_msgs/Point min_val\n"
"\n"
"# Top right corner\n"
"geometry_msgs/Point max_val\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.get_current_bound);
      stream.next(m.reset_to_default);
      stream.next(m.bound);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planner_set_global_boundRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::planner_set_global_boundRequest_<ContainerAllocator>& v)
  {
    s << indent << "get_current_bound: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.get_current_bound);
    s << indent << "reset_to_default: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reset_to_default);
    s << indent << "bound: ";
    s << std::endl;
    Printer< ::planner_msgs::PlanningBound_<ContainerAllocator> >::stream(s, indent + "  ", v.bound);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_SET_GLOBAL_BOUNDREQUEST_H
