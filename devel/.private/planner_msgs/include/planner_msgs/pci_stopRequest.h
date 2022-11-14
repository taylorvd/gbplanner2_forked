// Generated by gencpp from file planner_msgs/pci_stopRequest.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PCI_STOPREQUEST_H
#define PLANNER_MSGS_MESSAGE_PCI_STOPREQUEST_H


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
struct pci_stopRequest_
{
  typedef pci_stopRequest_<ContainerAllocator> Type;

  pci_stopRequest_()
    {
    }
  pci_stopRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::planner_msgs::pci_stopRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::pci_stopRequest_<ContainerAllocator> const> ConstPtr;

}; // struct pci_stopRequest_

typedef ::planner_msgs::pci_stopRequest_<std::allocator<void> > pci_stopRequest;

typedef boost::shared_ptr< ::planner_msgs::pci_stopRequest > pci_stopRequestPtr;
typedef boost::shared_ptr< ::planner_msgs::pci_stopRequest const> pci_stopRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::pci_stopRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::pci_stopRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::pci_stopRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::pci_stopRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::pci_stopRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::pci_stopRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::pci_stopRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::pci_stopRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::pci_stopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::planner_msgs::pci_stopRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::pci_stopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/pci_stopRequest";
  }

  static const char* value(const ::planner_msgs::pci_stopRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::pci_stopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::planner_msgs::pci_stopRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::pci_stopRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct pci_stopRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::pci_stopRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::planner_msgs::pci_stopRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PCI_STOPREQUEST_H
