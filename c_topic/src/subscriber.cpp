#include<ros/ros.h>
#include<std_msgs/String.h>

void callback(const std_msgs::String& msg){
    ROS_INFO("%s",msg.data.c_str());
}

int main(int argc, char** argv){
    ros::init(argc,argv,"simple_listener");
    ros::NodeHandle n;
    ros::Subscriber ros_sub = n.subscribe("chatter",10,callback);

    ros::spin();
    return 0;
}