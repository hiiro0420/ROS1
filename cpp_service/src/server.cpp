#include<ros/ros.h>
#include<cpp_service/Wheel.h>

bool serviceCallBack(cpp_service::Wheel::Request &req,
cpp_service::Wheel::Response &resp) {          // リクエスト受信時に呼ばれるコールバック関数
  ROS_INFO_STREAM("Recive Request!");       // 標準出力へリクエスト受信を表示
  return true;                              // レスポンスの戻り値
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "srv_test");        // ノードの初期化（ノード名を"srv_test"に設定）
  ros::NodeHandle nh;                       // ノードハンドルの生成
  ros::ServiceServer srv = nh.advertiseService("test", &serviceCallBack);  // サーバー生成とコールバック関数の登録
  ROS_INFO_STREAM("Service ready!");
  ros::spin();                              // リクエストの無限待ち
}

