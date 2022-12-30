#!/usr/bin/env python

import rospy
from std_msgs.msg import String

rospy.init_node("publisher")

pub = rospy.Publisher("chatter",String,queue_size = 10)

r = rospy.Rate(10)

while not rospy.is_shutdown():
    pub.publish("hello")
    r.sleep()