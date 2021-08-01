// Generated by gencpp from file ggcnn/GraspPrediction.msg
// DO NOT EDIT!


#ifndef GGCNN_MESSAGE_GRASPPREDICTION_H
#define GGCNN_MESSAGE_GRASPPREDICTION_H

#include <ros/service_traits.h>


#include <ggcnn/GraspPredictionRequest.h>
#include <ggcnn/GraspPredictionResponse.h>


namespace ggcnn
{

struct GraspPrediction
{

typedef GraspPredictionRequest Request;
typedef GraspPredictionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GraspPrediction
} // namespace ggcnn


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ggcnn::GraspPrediction > {
  static const char* value()
  {
    return "86d7d0d5a00535c6699247df54f62820";
  }

  static const char* value(const ::ggcnn::GraspPrediction&) { return value(); }
};

template<>
struct DataType< ::ggcnn::GraspPrediction > {
  static const char* value()
  {
    return "ggcnn/GraspPrediction";
  }

  static const char* value(const ::ggcnn::GraspPrediction&) { return value(); }
};


// service_traits::MD5Sum< ::ggcnn::GraspPredictionRequest> should match
// service_traits::MD5Sum< ::ggcnn::GraspPrediction >
template<>
struct MD5Sum< ::ggcnn::GraspPredictionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ggcnn::GraspPrediction >::value();
  }
  static const char* value(const ::ggcnn::GraspPredictionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ggcnn::GraspPredictionRequest> should match
// service_traits::DataType< ::ggcnn::GraspPrediction >
template<>
struct DataType< ::ggcnn::GraspPredictionRequest>
{
  static const char* value()
  {
    return DataType< ::ggcnn::GraspPrediction >::value();
  }
  static const char* value(const ::ggcnn::GraspPredictionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ggcnn::GraspPredictionResponse> should match
// service_traits::MD5Sum< ::ggcnn::GraspPrediction >
template<>
struct MD5Sum< ::ggcnn::GraspPredictionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ggcnn::GraspPrediction >::value();
  }
  static const char* value(const ::ggcnn::GraspPredictionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ggcnn::GraspPredictionResponse> should match
// service_traits::DataType< ::ggcnn::GraspPrediction >
template<>
struct DataType< ::ggcnn::GraspPredictionResponse>
{
  static const char* value()
  {
    return DataType< ::ggcnn::GraspPrediction >::value();
  }
  static const char* value(const ::ggcnn::GraspPredictionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GGCNN_MESSAGE_GRASPPREDICTION_H