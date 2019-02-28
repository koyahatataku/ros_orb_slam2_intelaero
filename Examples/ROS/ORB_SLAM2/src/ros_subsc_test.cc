#include "ros/ros.h"
#include <tf/transform_broadcaster.h>


void msgCallback(const tf& recv)
{
	//tf::Quaternion q = newTransform.getRotation();
	//tf::Vector3 vec = newTransform.getOrigin();

	//ROS_INFO("llhh", msg->stamp.sec);
	//ROS

//	printf("origin (%f , %f , %f)  rotation(%f %f %f)\n",
printf("recv\n");
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "TF_SBSC");
	ros::NodeHandle nh;

	ros::Subscriber ros_subcriber =
		nh.subscribe("pose",100,msgCallback);

	ros::spin();
return 0;
}
