// Listener

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

void Callback(const create_msgs_example::pet msg)
{
	cout << endl;
	cout << msg << endl;
	cout << endl;

} //Callback() 

int main(int argc, char** argv)
{
  	ros::init(argc, argv, "listener");
	ros::NodeHandle nh;
			
	ros::Subscriber sub = nh.subscribe<create_msgs_example::pet>("send_nudes", 1, Callback);
	ros::spin();

	return 0;

}
