#include<ros/ros.h>
#include<std_msgs/String.h>

int main(int argc, char** argv){
    ros::init(argc,argv,"simple_talker");
    ros::NodeHandle n;
    ros::Publisher ros_pub = n.advertise<std_msgs::String>("chatter",10);
    ros::Rate loop_rate(10);

    while(ros::ok()){
        std_msgs::String msg;
        msg.data = "hello World";
        ros_pub.publish(msg);

        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}