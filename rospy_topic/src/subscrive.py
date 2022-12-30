#!/usr/bin/env python

import rospy
from std_msgs.msg import String

def callback(data):
    print(data)

def listener():

    rospy.init_node("subscriber",anonymous = False)
    rospy.Subscriber("chatter",String,callback)

    rospy.spin()

if __name__ == "__main__":
    listener()