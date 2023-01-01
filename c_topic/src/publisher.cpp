#include<ros/ros.h>

// メッセージの型を決定(重要)
#include<std_msgs/String.h>

int main(int argc, char** argv){

    // ノードの名前を定義
    ros::init(argc,argv,"simple_talker");
    ros::NodeHandle n;

    // メッセージの型、名前、サイズを決定
    ros::Publisher ros_pub = n.advertise<std_msgs::String>("chatter",10);
    ros::Rate loop_rate(10);

    while(ros::ok()){
        std_msgs::String msg;
        msg.data = "hello World";
        
        // パブリッシュ
        ros_pub.publish(msg);

        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}