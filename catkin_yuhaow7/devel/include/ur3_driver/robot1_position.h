// Generated by gencpp from file ur3_driver/robot1_position.msg
// DO NOT EDIT!


#ifndef UR3_DRIVER_MESSAGE_ROBOT1_POSITION_H
#define UR3_DRIVER_MESSAGE_ROBOT1_POSITION_H


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
struct robot1_position_
{
  typedef robot1_position_<ContainerAllocator> Type;

  robot1_position_()
    : position_1()
    , isReady_1(false)  {
    }
  robot1_position_(const ContainerAllocator& _alloc)
    : position_1(_alloc)
    , isReady_1(false)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _position_1_type;
  _position_1_type position_1;

   typedef uint8_t _isReady_1_type;
  _isReady_1_type isReady_1;





  typedef boost::shared_ptr< ::ur3_driver::robot1_position_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur3_driver::robot1_position_<ContainerAllocator> const> ConstPtr;

}; // struct robot1_position_

typedef ::ur3_driver::robot1_position_<std::allocator<void> > robot1_position;

typedef boost::shared_ptr< ::ur3_driver::robot1_position > robot1_positionPtr;
typedef boost::shared_ptr< ::ur3_driver::robot1_position const> robot1_positionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur3_driver::robot1_position_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur3_driver::robot1_position_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ur3_driver::robot1_position_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur3_driver::robot1_position_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur3_driver::robot1_position_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur3_driver::robot1_position_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3_driver::robot1_position_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3_driver::robot1_position_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur3_driver::robot1_position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f6cead3ecb176587694a624f90d3a7d1";
  }

  static const char* value(const ::ur3_driver::robot1_position_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf6cead3ecb176587ULL;
  static const uint64_t static_value2 = 0x694a624f90d3a7d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::ur3_driver::robot1_position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur3_driver/robot1_position";
  }

  static const char* value(const ::ur3_driver::robot1_position_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur3_driver::robot1_position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] position_1\n\
bool isReady_1\n\
";
  }

  static const char* value(const ::ur3_driver::robot1_position_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur3_driver::robot1_position_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position_1);
      stream.next(m.isReady_1);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct robot1_position_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur3_driver::robot1_position_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur3_driver::robot1_position_<ContainerAllocator>& v)
  {
    s << indent << "position_1[]" << std::endl;
    for (size_t i = 0; i < v.position_1.size(); ++i)
    {
      s << indent << "  position_1[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position_1[i]);
    }
    s << indent << "isReady_1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isReady_1);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR3_DRIVER_MESSAGE_ROBOT1_POSITION_H
