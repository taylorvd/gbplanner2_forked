// Generated by gencpp from file planner_msgs/planner_request_pathRequest.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_REQUEST_PATHREQUEST_H
#define PLANNER_MSGS_MESSAGE_PLANNER_REQUEST_PATHREQUEST_H


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
struct planner_request_pathRequest_
{
  typedef planner_request_pathRequest_<ContainerAllocator> Type;

  planner_request_pathRequest_()
    {
    }
  planner_request_pathRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> const> ConstPtr;

}; // struct planner_request_pathRequest_

typedef ::planner_msgs::planner_request_pathRequest_<std::allocator<void> > planner_request_pathRequest;

typedef boost::shared_ptr< ::planner_msgs::planner_request_pathRequest > planner_request_pathRequestPtr;
typedef boost::shared_ptr< ::planner_msgs::planner_request_pathRequest const> planner_request_pathRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::planner_msgs::planner_request_pathRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planner_request_pathRequest";
  }

  static const char* value(const ::planner_msgs::planner_request_pathRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A generic service to request a path from gbplanner\n"
"\n"
;
  }

  static const char* value(const ::planner_msgs::planner_request_pathRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planner_request_pathRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planner_request_pathRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::planner_msgs::planner_request_pathRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_REQUEST_PATHREQUEST_H
