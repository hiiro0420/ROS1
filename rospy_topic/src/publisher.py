#!/usr/bin/env python

# rospyを使うことを宣言(pythonなら必須)
import rospy
# メッセージの型を宣言(重要)
from std_msgs.msg import String

# nodeの名前を決定(なんでもよい)
rospy.init_node("publisher")

# メッセージの名前や型、サイズを決定
pub = rospy.Publisher("chatter",String,queue_size = 10)

# メッセージを送る周期を決定
r = rospy.Rate(10)

while not rospy.is_shutdown():

    # パブリッシュを実行
    pub.publish("hello")
    r.sleep()