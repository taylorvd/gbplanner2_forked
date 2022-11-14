// Generated by gencpp from file planner_msgs/planner_set_homing_pos.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_SET_HOMING_POS_H
#define PLANNER_MSGS_MESSAGE_PLANNER_SET_HOMING_POS_H

#include <ros/service_traits.h>


#include <planner_msgs/planner_set_homing_posRequest.h>
#include <planner_msgs/planner_set_homing_posResponse.h>


namespace planner_msgs
{

struct planner_set_homing_pos
{

typedef planner_set_homing_posRequest Request;
typedef planner_set_homing_posResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct planner_set_homing_pos
} // namespace planner_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::planner_msgs::planner_set_homing_pos > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::planner_msgs::planner_set_homing_pos&) { return value(); }
};

template<>
struct DataType< ::planner_msgs::planner_set_homing_pos > {
  static const char* value()
  {
    return "planner_msgs/planner_set_homing_pos";
  }

  static const char* value(const ::planner_msgs::planner_set_homing_pos&) { return value(); }
};


// service_traits::MD5Sum< ::planner_msgs::planner_set_homing_posRequest> should match
// service_traits::MD5Sum< ::planner_msgs::planner_set_homing_pos >
template<>
struct MD5Sum< ::planner_msgs::planner_set_homing_posRequest>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::planner_set_homing_pos >::value();
  }
  static const char* value(const ::planner_msgs::planner_set_homing_posRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::planner_set_homing_posRequest> should match
// service_traits::DataType< ::planner_msgs::planner_set_homing_pos >
template<>
struct DataType< ::planner_msgs::planner_set_homing_posRequest>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::planner_set_homing_pos >::value();
  }
  static const char* value(const ::planner_msgs::planner_set_homing_posRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::planner_msgs::planner_set_homing_posResponse> should match
// service_traits::MD5Sum< ::planner_msgs::planner_set_homing_pos >
template<>
struct MD5Sum< ::planner_msgs::planner_set_homing_posResponse>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::planner_set_homing_pos >::value();
  }
  static const char* value(const ::planner_msgs::planner_set_homing_posResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::planner_set_homing_posResponse> should match
// service_traits::DataType< ::planner_msgs::planner_set_homing_pos >
template<>
struct DataType< ::planner_msgs::planner_set_homing_posResponse>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::planner_set_homing_pos >::value();
  }
  static const char* value(const ::planner_msgs::planner_set_homing_posResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_SET_HOMING_POS_H
