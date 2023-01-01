#include<ros/ros.h>
#include<std_msgs/String.h>

// 関数を定義
void callback(const std_msgs::String& msg){
    ROS_INFO("%s",msg.data.c_str());
}

int main(int argc, char** argv){

    // ノードの名前を決定
    ros::init(argc,argv,"simple_listener");
    ros::NodeHandle n;

    // メッセージに名前、サイズ、関数を定義
    ros::Subscriber ros_sub = n.subscribe("chatter",10,callback);

    ros::spin();
    return 0;
}