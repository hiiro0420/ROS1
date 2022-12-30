#include<ros/ros.h>
#include<cpp_service/Wheel.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "clt_test");        // ノードの初期化（ノード名を"clt_test"に設定）
  ros::NodeHandle nh;                       // ノードハンドルの生成
  ros::ServiceClient testClient = nh.serviceClient<cpp_service::Wheel>("test");  // クライアントの生成
  cpp_service::Wheel::Request req;             // リクエストの生成
  cpp_service::Wheel::Response resp;           // レスポンスの生成
  bool result = testClient.call(req, resp); // リクエストの送信
  if(result) ROS_INFO_STREAM("Recive response!");     // レスポンス受信の表示
  else ROS_INFO_STREAM("Error!");
}