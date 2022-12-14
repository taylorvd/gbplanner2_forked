// Generated by gencpp from file planner_msgs/planner_set_homing_posRequest.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_SET_HOMING_POSREQUEST_H
#define PLANNER_MSGS_MESSAGE_PLANNER_SET_HOMING_POSREQUEST_H


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
struct planner_set_homing_posRequest_
{
  typedef planner_set_homing_posRequest_<ContainerAllocator> Type;

  planner_set_homing_posRequest_()
    {
    }
  planner_set_homing_posRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> const> ConstPtr;

}; // struct planner_set_homing_posRequest_

typedef ::planner_msgs::planner_set_homing_posRequest_<std::allocator<void> > planner_set_homing_posRequest;

typedef boost::shared_ptr< ::planner_msgs::planner_set_homing_posRequest > planner_set_homing_posRequestPtr;
typedef boost::shared_ptr< ::planner_msgs::planner_set_homing_posRequest const> planner_set_homing_posRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/planner_set_homing_posRequest";
  }

  static const char* value(const ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Set current position as homing position.\n"
;
  }

  static const char* value(const ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct planner_set_homing_posRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::planner_msgs::planner_set_homing_posRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_SET_HOMING_POSREQUEST_H
