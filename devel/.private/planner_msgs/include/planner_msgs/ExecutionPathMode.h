// Generated by gencpp from file planner_msgs/ExecutionPathMode.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_EXECUTIONPATHMODE_H
#define PLANNER_MSGS_MESSAGE_EXECUTIONPATHMODE_H


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
struct ExecutionPathMode_
{
  typedef ExecutionPathMode_<ContainerAllocator> Type;

  ExecutionPathMode_()
    : mode(0)
    , is_forward(false)  {
    }
  ExecutionPathMode_(const ContainerAllocator& _alloc)
    : mode(0)
    , is_forward(false)  {
  (void)_alloc;
    }



   typedef int32_t _mode_type;
  _mode_type mode;

   typedef uint8_t _is_forward_type;
  _is_forward_type is_forward;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(kLocalPath)
  #undef kLocalPath
#endif
#if defined(_WIN32) && defined(kHomingPath)
  #undef kHomingPath
#endif
#if defined(_WIN32) && defined(kGlobalPath)
  #undef kGlobalPath
#endif

  enum {
    kLocalPath = 0,
    kHomingPath = 1,
    kGlobalPath = 2,
  };


  typedef boost::shared_ptr< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> const> ConstPtr;

}; // struct ExecutionPathMode_

typedef ::planner_msgs::ExecutionPathMode_<std::allocator<void> > ExecutionPathMode;

typedef boost::shared_ptr< ::planner_msgs::ExecutionPathMode > ExecutionPathModePtr;
typedef boost::shared_ptr< ::planner_msgs::ExecutionPathMode const> ExecutionPathModeConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::ExecutionPathMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::ExecutionPathMode_<ContainerAllocator1> & lhs, const ::planner_msgs::ExecutionPathMode_<ContainerAllocator2> & rhs)
{
  return lhs.mode == rhs.mode &&
    lhs.is_forward == rhs.is_forward;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::ExecutionPathMode_<ContainerAllocator1> & lhs, const ::planner_msgs::ExecutionPathMode_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9e0ca27c7cff652c41de65686e5ccf7d";
  }

  static const char* value(const ::planner_msgs::ExecutionPathMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9e0ca27c7cff652cULL;
  static const uint64_t static_value2 = 0x41de65686e5ccf7dULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/ExecutionPathMode";
  }

  static const char* value(const ::planner_msgs::ExecutionPathMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Execution path mode, defined in ExecutionPathType.\n"
"int32 kLocalPath = 0\n"
"int32 kHomingPath = 1\n"
"int32 kGlobalPath = 2\n"
"\n"
"# Set one of above values.\n"
"int32 mode\n"
"\n"
"# The path is in forward direction compared to current exploration direction or not\n"
"bool is_forward\n"
;
  }

  static const char* value(const ::planner_msgs::ExecutionPathMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
      stream.next(m.is_forward);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExecutionPathMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::ExecutionPathMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::ExecutionPathMode_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mode);
    s << indent << "is_forward: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_forward);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_EXECUTIONPATHMODE_H
