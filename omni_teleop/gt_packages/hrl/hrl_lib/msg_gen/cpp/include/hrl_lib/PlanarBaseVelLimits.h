/* Auto-generated by genmsg_cpp for file /home/aellaboudy/aellaboudy_sandbox/gt_packages_new/gt_packages/hrl/hrl_lib/msg/PlanarBaseVelLimits.msg */
#ifndef HRL_LIB_MESSAGE_PLANARBASEVELLIMITS_H
#define HRL_LIB_MESSAGE_PLANARBASEVELLIMITS_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "std_msgs/Header.h"

namespace hrl_lib
{
template <class ContainerAllocator>
struct PlanarBaseVelLimits_ : public ros::Message
{
  typedef PlanarBaseVelLimits_<ContainerAllocator> Type;

  PlanarBaseVelLimits_()
  : header()
  , xvel_pos_max(0.0)
  , xvel_neg_max(0.0)
  , yvel_pos_max(0.0)
  , yvel_neg_max(0.0)
  , avel_max(0.0)
  {
  }

  PlanarBaseVelLimits_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , xvel_pos_max(0.0)
  , xvel_neg_max(0.0)
  , yvel_pos_max(0.0)
  , yvel_neg_max(0.0)
  , avel_max(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef double _xvel_pos_max_type;
  double xvel_pos_max;

  typedef double _xvel_neg_max_type;
  double xvel_neg_max;

  typedef double _yvel_pos_max_type;
  double yvel_pos_max;

  typedef double _yvel_neg_max_type;
  double yvel_neg_max;

  typedef double _avel_max_type;
  double avel_max;


private:
  static const char* __s_getDataType_() { return "hrl_lib/PlanarBaseVelLimits"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "79d6a8bc99f5988deabb3198a791ba92"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# max allowable velocities in positive and negative X and Y directions\n\
# and max allowable angular velocity.\n\
Header header\n\
float64 xvel_pos_max\n\
float64 xvel_neg_max\n\
float64 yvel_pos_max\n\
float64 yvel_neg_max\n\
float64 avel_max\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, xvel_pos_max);
    ros::serialization::serialize(stream, xvel_neg_max);
    ros::serialization::serialize(stream, yvel_pos_max);
    ros::serialization::serialize(stream, yvel_neg_max);
    ros::serialization::serialize(stream, avel_max);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, xvel_pos_max);
    ros::serialization::deserialize(stream, xvel_neg_max);
    ros::serialization::deserialize(stream, yvel_pos_max);
    ros::serialization::deserialize(stream, yvel_neg_max);
    ros::serialization::deserialize(stream, avel_max);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(xvel_pos_max);
    size += ros::serialization::serializationLength(xvel_neg_max);
    size += ros::serialization::serializationLength(yvel_pos_max);
    size += ros::serialization::serializationLength(yvel_neg_max);
    size += ros::serialization::serializationLength(avel_max);
    return size;
  }

  typedef boost::shared_ptr< ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator>  const> ConstPtr;
}; // struct PlanarBaseVelLimits
typedef  ::hrl_lib::PlanarBaseVelLimits_<std::allocator<void> > PlanarBaseVelLimits;

typedef boost::shared_ptr< ::hrl_lib::PlanarBaseVelLimits> PlanarBaseVelLimitsPtr;
typedef boost::shared_ptr< ::hrl_lib::PlanarBaseVelLimits const> PlanarBaseVelLimitsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace hrl_lib

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> > {
  static const char* value() 
  {
    return "79d6a8bc99f5988deabb3198a791ba92";
  }

  static const char* value(const  ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x79d6a8bc99f5988dULL;
  static const uint64_t static_value2 = 0xeabb3198a791ba92ULL;
};

template<class ContainerAllocator>
struct DataType< ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hrl_lib/PlanarBaseVelLimits";
  }

  static const char* value(const  ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# max allowable velocities in positive and negative X and Y directions\n\
# and max allowable angular velocity.\n\
Header header\n\
float64 xvel_pos_max\n\
float64 xvel_neg_max\n\
float64 yvel_pos_max\n\
float64 yvel_neg_max\n\
float64 avel_max\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.xvel_pos_max);
    stream.next(m.xvel_neg_max);
    stream.next(m.yvel_pos_max);
    stream.next(m.yvel_neg_max);
    stream.next(m.avel_max);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PlanarBaseVelLimits_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::hrl_lib::PlanarBaseVelLimits_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "xvel_pos_max: ";
    Printer<double>::stream(s, indent + "  ", v.xvel_pos_max);
    s << indent << "xvel_neg_max: ";
    Printer<double>::stream(s, indent + "  ", v.xvel_neg_max);
    s << indent << "yvel_pos_max: ";
    Printer<double>::stream(s, indent + "  ", v.yvel_pos_max);
    s << indent << "yvel_neg_max: ";
    Printer<double>::stream(s, indent + "  ", v.yvel_neg_max);
    s << indent << "avel_max: ";
    Printer<double>::stream(s, indent + "  ", v.avel_max);
  }
};


} // namespace message_operations
} // namespace ros

#endif // HRL_LIB_MESSAGE_PLANARBASEVELLIMITS_H

