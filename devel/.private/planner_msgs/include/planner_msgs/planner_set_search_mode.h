// Generated by gencpp from file planner_msgs/planner_set_search_mode.msg
// DO NOT EDIT!


#ifndef PLANNER_MSGS_MESSAGE_PLANNER_SET_SEARCH_MODE_H
#define PLANNER_MSGS_MESSAGE_PLANNER_SET_SEARCH_MODE_H

#include <ros/service_traits.h>


#include <planner_msgs/planner_set_search_modeRequest.h>
#include <planner_msgs/planner_set_search_modeResponse.h>


namespace planner_msgs
{

struct planner_set_search_mode
{

typedef planner_set_search_modeRequest Request;
typedef planner_set_search_modeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct planner_set_search_mode
} // namespace planner_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::planner_msgs::planner_set_search_mode > {
  static const char* value()
  {
    return "7dd8f9262ed5f0e5ecceeb616f68053b";
  }

  static const char* value(const ::planner_msgs::planner_set_search_mode&) { return value(); }
};

template<>
struct DataType< ::planner_msgs::planner_set_search_mode > {
  static const char* value()
  {
    return "planner_msgs/planner_set_search_mode";
  }

  static const char* value(const ::planner_msgs::planner_set_search_mode&) { return value(); }
};


// service_traits::MD5Sum< ::planner_msgs::planner_set_search_modeRequest> should match
// service_traits::MD5Sum< ::planner_msgs::planner_set_search_mode >
template<>
struct MD5Sum< ::planner_msgs::planner_set_search_modeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::planner_set_search_mode >::value();
  }
  static const char* value(const ::planner_msgs::planner_set_search_modeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::planner_set_search_modeRequest> should match
// service_traits::DataType< ::planner_msgs::planner_set_search_mode >
template<>
struct DataType< ::planner_msgs::planner_set_search_modeRequest>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::planner_set_search_mode >::value();
  }
  static const char* value(const ::planner_msgs::planner_set_search_modeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::planner_msgs::planner_set_search_modeResponse> should match
// service_traits::MD5Sum< ::planner_msgs::planner_set_search_mode >
template<>
struct MD5Sum< ::planner_msgs::planner_set_search_modeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::planner_msgs::planner_set_search_mode >::value();
  }
  static const char* value(const ::planner_msgs::planner_set_search_modeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::planner_msgs::planner_set_search_modeResponse> should match
// service_traits::DataType< ::planner_msgs::planner_set_search_mode >
template<>
struct DataType< ::planner_msgs::planner_set_search_modeResponse>
{
  static const char* value()
  {
    return DataType< ::planner_msgs::planner_set_search_mode >::value();
  }
  static const char* value(const ::planner_msgs::planner_set_search_modeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PLANNER_MSGS_MESSAGE_PLANNER_SET_SEARCH_MODE_H