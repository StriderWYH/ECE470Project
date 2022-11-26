// Generated by gencpp from file ur3_driver/robot2_command.msg
// DO NOT EDIT!


#ifndef UR3_DRIVER_MESSAGE_ROBOT2_COMMAND_H
#define UR3_DRIVER_MESSAGE_ROBOT2_COMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur3_driver
{
template <class ContainerAllocator>
struct robot2_command_
{
  typedef robot2_command_<ContainerAllocator> Type;

  robot2_command_()
    : destination_2()
    , v_2(0.0)
    , a_2(0.0)
    , io_0_2(false)  {
    }
  robot2_command_(const ContainerAllocator& _alloc)
    : destination_2(_alloc)
    , v_2(0.0)
    , a_2(0.0)
    , io_0_2(false)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _destination_2_type;
  _destination_2_type destination_2;

   typedef double _v_2_type;
  _v_2_type v_2;

   typedef double _a_2_type;
  _a_2_type a_2;

   typedef uint8_t _io_0_2_type;
  _io_0_2_type io_0_2;





  typedef boost::shared_ptr< ::ur3_driver::robot2_command_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur3_driver::robot2_command_<ContainerAllocator> const> ConstPtr;

}; // struct robot2_command_

typedef ::ur3_driver::robot2_command_<std::allocator<void> > robot2_command;

typedef boost::shared_ptr< ::ur3_driver::robot2_command > robot2_commandPtr;
typedef boost::shared_ptr< ::ur3_driver::robot2_command const> robot2_commandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur3_driver::robot2_command_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur3_driver::robot2_command_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ur3_driver

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'ur3_driver': ['/home/ur3/catkin_yuhaow7/src/drivers/ur3_driver/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ur3_driver::robot2_command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur3_driver::robot2_command_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur3_driver::robot2_command_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur3_driver::robot2_command_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3_driver::robot2_command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3_driver::robot2_command_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur3_driver::robot2_command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d1a5d9f50588237f312ad342ca45045c";
  }

  static const char* value(const ::ur3_driver::robot2_command_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd1a5d9f50588237fULL;
  static const uint64_t static_value2 = 0x312ad342ca45045cULL;
};

template<class ContainerAllocator>
struct DataType< ::ur3_driver::robot2_command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur3_driver/robot2_command";
  }

  static const char* value(const ::ur3_driver::robot2_command_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur3_driver::robot2_command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] destination_2\n\
float64 v_2\n\
float64 a_2\n\
bool io_0_2\n\
";
  }

  static const char* value(const ::ur3_driver::robot2_command_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur3_driver::robot2_command_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.destination_2);
      stream.next(m.v_2);
      stream.next(m.a_2);
      stream.next(m.io_0_2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct robot2_command_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur3_driver::robot2_command_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur3_driver::robot2_command_<ContainerAllocator>& v)
  {
    s << indent << "destination_2[]" << std::endl;
    for (size_t i = 0; i < v.destination_2.size(); ++i)
    {
      s << indent << "  destination_2[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.destination_2[i]);
    }
    s << indent << "v_2: ";
    Printer<double>::stream(s, indent + "  ", v.v_2);
    s << indent << "a_2: ";
    Printer<double>::stream(s, indent + "  ", v.a_2);
    s << indent << "io_0_2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.io_0_2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR3_DRIVER_MESSAGE_ROBOT2_COMMAND_H
