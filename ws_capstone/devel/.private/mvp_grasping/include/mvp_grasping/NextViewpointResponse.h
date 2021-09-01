// Generated by gencpp from file mvp_grasping/NextViewpointResponse.msg
// DO NOT EDIT!


#ifndef MVP_GRASPING_MESSAGE_NEXTVIEWPOINTRESPONSE_H
#define MVP_GRASPING_MESSAGE_NEXTVIEWPOINTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Twist.h>
#include <mvp_grasping/Grasp.h>

namespace mvp_grasping
{
template <class ContainerAllocator>
struct NextViewpointResponse_
{
  typedef NextViewpointResponse_<ContainerAllocator> Type;

  NextViewpointResponse_()
    : success(false)
    , velocity_cmd()
    , best_grasp()
    , no_viewpoints(0)  {
    }
  NextViewpointResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , velocity_cmd(_alloc)
    , best_grasp(_alloc)
    , no_viewpoints(0)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef  ::geometry_msgs::Twist_<ContainerAllocator>  _velocity_cmd_type;
  _velocity_cmd_type velocity_cmd;

   typedef  ::mvp_grasping::Grasp_<ContainerAllocator>  _best_grasp_type;
  _best_grasp_type best_grasp;

   typedef uint32_t _no_viewpoints_type;
  _no_viewpoints_type no_viewpoints;





  typedef boost::shared_ptr< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> const> ConstPtr;

}; // struct NextViewpointResponse_

typedef ::mvp_grasping::NextViewpointResponse_<std::allocator<void> > NextViewpointResponse;

typedef boost::shared_ptr< ::mvp_grasping::NextViewpointResponse > NextViewpointResponsePtr;
typedef boost::shared_ptr< ::mvp_grasping::NextViewpointResponse const> NextViewpointResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mvp_grasping::NextViewpointResponse_<ContainerAllocator1> & lhs, const ::mvp_grasping::NextViewpointResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.velocity_cmd == rhs.velocity_cmd &&
    lhs.best_grasp == rhs.best_grasp &&
    lhs.no_viewpoints == rhs.no_viewpoints;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mvp_grasping::NextViewpointResponse_<ContainerAllocator1> & lhs, const ::mvp_grasping::NextViewpointResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mvp_grasping

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b48658ae3de44f598cf8af1346003291";
  }

  static const char* value(const ::mvp_grasping::NextViewpointResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb48658ae3de44f59ULL;
  static const uint64_t static_value2 = 0x8cf8af1346003291ULL;
};

template<class ContainerAllocator>
struct DataType< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mvp_grasping/NextViewpointResponse";
  }

  static const char* value(const ::mvp_grasping::NextViewpointResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"geometry_msgs/Twist velocity_cmd\n"
"mvp_grasping/Grasp best_grasp\n"
"uint32 no_viewpoints\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: mvp_grasping/Grasp\n"
"geometry_msgs/Pose pose\n"
"float32 quality\n"
"float32 entropy\n"
"float32 width\n"
"\n"
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
;
  }

  static const char* value(const ::mvp_grasping::NextViewpointResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.velocity_cmd);
      stream.next(m.best_grasp);
      stream.next(m.no_viewpoints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NextViewpointResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mvp_grasping::NextViewpointResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mvp_grasping::NextViewpointResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "velocity_cmd: ";
    s << std::endl;
    Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity_cmd);
    s << indent << "best_grasp: ";
    s << std::endl;
    Printer< ::mvp_grasping::Grasp_<ContainerAllocator> >::stream(s, indent + "  ", v.best_grasp);
    s << indent << "no_viewpoints: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.no_viewpoints);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MVP_GRASPING_MESSAGE_NEXTVIEWPOINTRESPONSE_H