// Generated by gencpp from file planner_msgs/planner_string_trigger.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_STRING_TRIGGER_H
#define PLANNER_MSGS_MESSAGE_PLANNER_STRING_TRIGGER_H

#include <ros/service_traits.h>


#include <planner_msgs/planner_string_triggerRequest.h>
#include <planner_msgs/planner_string_triggerResponse.h>


namespace planner_msgs
{

struct planner_string_trigger
{

typedef planner_string_triggerRequest Request;
typedef planner_string_triggerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct planner_string_trigger
} // namespace planner_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::planner_msgs::planner_string_trigger > {
  static const char* value()
  {
    return "8b7095eb8dcd517ba7c37a0a06dcc50b";
  }

  static const char* value(const ::planner_msgs::planner_string_trigger&) { return value(); }
};

template<>
struct DataType< ::planner_msgs::planner_string_trigger > {
  static const char* value()
  {
    return "planner_msgs/planner_string_trigger";
  }

  static const char* value(const ::planner_msgs::planner_string_trigger&) { return value(); }
};


// service_traits::MD5Sum< ::planner_msgs::planner_string_triggerRequest> should match
// service_traits::MD5Sum< ::planner_msgs::planner_string_trigger >
template<>
struct MD5Sum< ::planner_msgs::planner_string_triggerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::planner_string_trigger >::value();
  }
  static const char* value(const ::planner_msgs::planner_string_triggerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::planner_string_triggerRequest> should match
// service_traits::DataType< ::planner_msgs::planner_string_trigger >
template<>
struct DataType< ::planner_msgs::planner_string_triggerRequest>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::planner_string_trigger >::value();
  }
  static const char* value(const ::planner_msgs::planner_string_triggerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::planner_msgs::planner_string_triggerResponse> should match
// service_traits::MD5Sum< ::planner_msgs::planner_string_trigger >
template<>
struct MD5Sum< ::planner_msgs::planner_string_triggerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::planner_string_trigger >::value();
  }
  static const char* value(const ::planner_msgs::planner_string_triggerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::planner_string_triggerResponse> should match
// service_traits::DataType< ::planner_msgs::planner_string_trigger >
template<>
struct DataType< ::planner_msgs::planner_string_triggerResponse>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::planner_string_trigger >::value();
  }
  static const char* value(const ::planner_msgs::planner_string_triggerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_STRING_TRIGGER_H