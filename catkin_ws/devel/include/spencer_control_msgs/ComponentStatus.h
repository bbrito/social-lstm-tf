// Generated by gencpp from file spencer_control_msgs/ComponentStatus.msg
// DO NOT EDIT!


#ifndef SPENCER_CONTROL_MSGS_MESSAGE_COMPONENTSTATUS_H
#define SPENCER_CONTROL_MSGS_MESSAGE_COMPONENTSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace spencer_control_msgs
{
template <class ContainerAllocator>
struct ComponentStatus_
{
  typedef ComponentStatus_<ContainerAllocator> Type;

  ComponentStatus_()
    : name()
    , alive(false)
    , detail()  {
    }
  ComponentStatus_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , alive(false)
    , detail(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef uint8_t _alive_type;
  _alive_type alive;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _detail_type;
  _detail_type detail;




  typedef boost::shared_ptr< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> const> ConstPtr;

}; // struct ComponentStatus_

typedef ::spencer_control_msgs::ComponentStatus_<std::allocator<void> > ComponentStatus;

typedef boost::shared_ptr< ::spencer_control_msgs::ComponentStatus > ComponentStatusPtr;
typedef boost::shared_ptr< ::spencer_control_msgs::ComponentStatus const> ComponentStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'spencer_control_msgs': ['/home/BB/catkin_ws/src/spencer_control_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b570ce0ae5316c3ad53df1d245486902";
  }

  static const char* value(const ::spencer_control_msgs::ComponentStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb570ce0ae5316c3aULL;
  static const uint64_t static_value2 = 0xd53df1d245486902ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_control_msgs/ComponentStatus";
  }

  static const char* value(const ::spencer_control_msgs::ComponentStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
bool alive\n\
string detail\n\
";
  }

  static const char* value(const ::spencer_control_msgs::ComponentStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.alive);
      stream.next(m.detail);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ComponentStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_control_msgs::ComponentStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_control_msgs::ComponentStatus_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "alive: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.alive);
    s << indent << "detail: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.detail);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_CONTROL_MSGS_MESSAGE_COMPONENTSTATUS_H
