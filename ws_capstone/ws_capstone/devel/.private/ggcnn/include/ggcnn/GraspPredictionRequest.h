// Generated by gencpp from file ggcnn/GraspPredictionRequest.msg
// DO NOT EDIT!


#ifndef GGCNN_MESSAGE_GRASPPREDICTIONREQUEST_H
#define GGCNN_MESSAGE_GRASPPREDICTIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ggcnn
{
template <class ContainerAllocator>
struct GraspPredictionRequest_
{
  typedef GraspPredictionRequest_<ContainerAllocator> Type;

  GraspPredictionRequest_()
    {
    }
  GraspPredictionRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GraspPredictionRequest_

typedef ::ggcnn::GraspPredictionRequest_<std::allocator<void> > GraspPredictionRequest;

typedef boost::shared_ptr< ::ggcnn::GraspPredictionRequest > GraspPredictionRequestPtr;
typedef boost::shared_ptr< ::ggcnn::GraspPredictionRequest const> GraspPredictionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ggcnn::GraspPredictionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace ggcnn

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::ggcnn::GraspPredictionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ggcnn/GraspPredictionRequest";
  }

  static const char* value(const ::ggcnn::GraspPredictionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::ggcnn::GraspPredictionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GraspPredictionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ggcnn::GraspPredictionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::ggcnn::GraspPredictionRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // GGCNN_MESSAGE_GRASPPREDICTIONREQUEST_H
