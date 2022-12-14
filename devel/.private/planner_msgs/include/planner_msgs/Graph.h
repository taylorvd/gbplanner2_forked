// Generated by gencpp from file planner_msgs/Graph.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_GRAPH_H
#define PLANNER_MSGS_MESSAGE_GRAPH_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <planner_msgs/Vertex.h>
#include <planner_msgs/Edge.h>

namespace planner_msgs
{
template <class ContainerAllocator>
struct Graph_
{
  typedef Graph_<ContainerAllocator> Type;

  Graph_()
    : header()
    , vertices()
    , edges()  {
    }
  Graph_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , vertices(_alloc)
    , edges(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::planner_msgs::Vertex_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::planner_msgs::Vertex_<ContainerAllocator> >> _vertices_type;
  _vertices_type vertices;

   typedef std::vector< ::planner_msgs::Edge_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::planner_msgs::Edge_<ContainerAllocator> >> _edges_type;
  _edges_type edges;





  typedef boost::shared_ptr< ::planner_msgs::Graph_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planner_msgs::Graph_<ContainerAllocator> const> ConstPtr;

}; // struct Graph_

typedef ::planner_msgs::Graph_<std::allocator<void> > Graph;

typedef boost::shared_ptr< ::planner_msgs::Graph > GraphPtr;
typedef boost::shared_ptr< ::planner_msgs::Graph const> GraphConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planner_msgs::Graph_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planner_msgs::Graph_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::planner_msgs::Graph_<ContainerAllocator1> & lhs, const ::planner_msgs::Graph_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.vertices == rhs.vertices &&
    lhs.edges == rhs.edges;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::planner_msgs::Graph_<ContainerAllocator1> & lhs, const ::planner_msgs::Graph_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace planner_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::Graph_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planner_msgs::Graph_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::Graph_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planner_msgs::Graph_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::Graph_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planner_msgs::Graph_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planner_msgs::Graph_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0f1eb1d0b23f9055c17c609dc10e68a8";
  }

  static const char* value(const ::planner_msgs::Graph_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0f1eb1d0b23f9055ULL;
  static const uint64_t static_value2 = 0xc17c609dc10e68a8ULL;
};

template<class ContainerAllocator>
struct DataType< ::planner_msgs::Graph_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planner_msgs/Graph";
  }

  static const char* value(const ::planner_msgs::Graph_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planner_msgs::Graph_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"planner_msgs/Vertex[] vertices\n"
"planner_msgs/Edge[] edges\n"
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
"MSG: planner_msgs/Vertex\n"
"int32 id\n"
"geometry_msgs/Pose pose\n"
"\n"
"# For volumetric gain\n"
"int32 num_unknown_voxels\n"
"int32 num_occupied_voxels\n"
"int32 num_free_voxels\n"
"bool is_frontier\n"
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
"\n"
"================================================================================\n"
"MSG: planner_msgs/Edge\n"
"int32 source_id\n"
"int32 target_id\n"
"float32 weight\n"
;
  }

  static const char* value(const ::planner_msgs::Graph_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planner_msgs::Graph_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.vertices);
      stream.next(m.edges);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Graph_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planner_msgs::Graph_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planner_msgs::Graph_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "vertices[]" << std::endl;
    for (size_t i = 0; i < v.vertices.size(); ++i)
    {
      s << indent << "  vertices[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::planner_msgs::Vertex_<ContainerAllocator> >::stream(s, indent + "    ", v.vertices[i]);
    }
    s << indent << "edges[]" << std::endl;
    for (size_t i = 0; i < v.edges.size(); ++i)
    {
      s << indent << "  edges[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::planner_msgs::Edge_<ContainerAllocator> >::stream(s, indent + "    ", v.edges[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_GRAPH_H
