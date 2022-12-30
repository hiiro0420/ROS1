#include "ros/ros.h"
#include "std_msgs/String.h"

#include<sstream>

int main(int argc, char **argv){
    ros::init(argc,argv,"talker");
    ros::NodeHandle n;

    ros::Publisher ros_publisher = n.advertise<std_msgs::String>("chatter",1000);
    ros::Rate loop_rate(10);

    while(ros::ok()){
        ros_publisher.publish("hello");
        loop_rate.sleep();
    }

    return 0;
}