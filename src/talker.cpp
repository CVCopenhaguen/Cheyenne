// Talker

// ROS 
#include <ros/ros.h>
#include <create_msgs_example/pet.h>
// General
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

int main(int argc, char** argv)
{
  	ros::init(argc, argv, "talker");
	ros::NodeHandle nh;

	ros::Publisher pub = nh.advertise<create_msgs_example::pet>("send_nudes", 1);
	create_msgs_example::pet msg;

	while(ros::ok())
	{
		msg.data.push_back(0.154);
		msg.data.push_back(1.892);
		msg.data.push_back(-1.114);
		msg.data.push_back(0.987);
		msg.data.push_back(1.003);
		msg.data.push_back(-0.215);

		pub.publish(msg);

		ros::spinOnce();
	}	

	return 0;

}
	
