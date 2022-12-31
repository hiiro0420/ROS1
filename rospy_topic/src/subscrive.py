#!/usr/bin/env python

# rospyを使うことを宣言(pythonなら必須)
import rospy

# メッセージの型を宣言(重要)
from std_msgs.msg import String

# 受け取ったメッセージを処理する関数
def callback(data):
    print(data)

def listener():

    # nodeの名前を決定(なんでもよい)
    rospy.init_node("subscriber",anonymous = False)

    # 受け取るメッセージの名前、型を定義し受け取ったメッセージを処理する関数まで定義
    rospy.Subscriber("chatter",String,callback)

    rospy.spin()

if __name__ == "__main__":
    listener()