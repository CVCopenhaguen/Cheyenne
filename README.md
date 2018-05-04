# Simple example on how to create and use ROS .msg 

Simple talker-listener just to show how to create ROS messages, define them in CMakeLists.txt and C++ nodes and use them.

#### Download and build

```sh
$ cd catkin_ws/src
$ git clone <this_repo>
$ cd ../
$ catkin_make
```

#### Execute

On separate terminals:

```sh
$ roscore
$ rosrun create_msg_example listener
$ rosrun create_msg_example talker
```

#### RQT graph

![alt text](rosgraph.png)
