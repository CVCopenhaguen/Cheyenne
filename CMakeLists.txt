cmake_minimum_required(VERSION 2.8.3)
project(create_msgs_example)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  roslib
  rosconsole
  std_msgs
  message_generation
)


# Generating new messages
add_message_files(
  FILES 
  pet.msg
)

generate_messages(
  DEPENDENCIES
  std_msgs
)

# catkin shit
catkin_package( CATKIN_DEPENDS message_runtime )

# Include directories
include_directories( ${catkin_INCLUDE_DIRS} )

# Build talker
add_executable(talker src/talker.cpp)
target_link_libraries( talker ${catkin_LIBRARIES} ${ROS_LIBRARIES} )

# Build Listener
add_executable(listener src/listener.cpp)
target_link_libraries( listener ${catkin_LIBRARIES} ${ROS_LIBRARIES} )
