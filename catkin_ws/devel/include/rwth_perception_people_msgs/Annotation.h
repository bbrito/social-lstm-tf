// Generated by gencpp from file rwth_perception_people_msgs/Annotation.msg
// DO NOT EDIT!


#ifndef RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_ANNOTATION_H
#define RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_ANNOTATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace rwth_perception_people_msgs
{
template <class ContainerAllocator>
struct Annotation_
{
  typedef Annotation_<ContainerAllocator> Type;

  Annotation_()
    : header()
    , frame(0)
    , id(0)
    , tlx(0.0)
    , tly(0.0)
    , width(0.0)
    , height(0.0)  {
    }
  Annotation_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , frame(0)
    , id(0)
    , tlx(0.0)
    , tly(0.0)
    , width(0.0)
    , height(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int64_t _frame_type;
  _frame_type frame;

   typedef int64_t _id_type;
  _id_type id;

   typedef double _tlx_type;
  _tlx_type tlx;

   typedef double _tly_type;
  _tly_type tly;

   typedef double _width_type;
  _width_type width;

   typedef double _height_type;
  _height_type height;




  typedef boost::shared_ptr< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> const> ConstPtr;

}; // struct Annotation_

typedef ::rwth_perception_people_msgs::Annotation_<std::allocator<void> > Annotation;

typedef boost::shared_ptr< ::rwth_perception_people_msgs::Annotation > AnnotationPtr;
typedef boost::shared_ptr< ::rwth_perception_people_msgs::Annotation const> AnnotationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rwth_perception_people_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'rwth_perception_people_msgs': ['/home/BB/catkin_ws/src/rwth_perception_people_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1184571960f4db44e163957ee1ece7f4";
  }

  static const char* value(const ::rwth_perception_people_msgs::Annotation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1184571960f4db44ULL;
  static const uint64_t static_value2 = 0xe163957ee1ece7f4ULL;
};

template<class ContainerAllocator>
struct DataType< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rwth_perception_people_msgs/Annotation";
  }

  static const char* value(const ::rwth_perception_people_msgs::Annotation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
# frame id (backref)\n\
int64 frame\n\
# box id\n\
int64 id\n\
# top left x\n\
float64 tlx\n\
# top left y\n\
float64 tly\n\
# bbox width\n\
float64 width\n\
# bbox height\n\
float64 height\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::rwth_perception_people_msgs::Annotation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.frame);
      stream.next(m.id);
      stream.next(m.tlx);
      stream.next(m.tly);
      stream.next(m.width);
      stream.next(m.height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Annotation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rwth_perception_people_msgs::Annotation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rwth_perception_people_msgs::Annotation_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "frame: ";
    Printer<int64_t>::stream(s, indent + "  ", v.frame);
    s << indent << "id: ";
    Printer<int64_t>::stream(s, indent + "  ", v.id);
    s << indent << "tlx: ";
    Printer<double>::stream(s, indent + "  ", v.tlx);
    s << indent << "tly: ";
    Printer<double>::stream(s, indent + "  ", v.tly);
    s << indent << "width: ";
    Printer<double>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RWTH_PERCEPTION_PEOPLE_MSGS_MESSAGE_ANNOTATION_H
