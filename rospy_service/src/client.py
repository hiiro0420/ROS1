#!/usr/bin/env python

import rospy
from rospy_service.srv import plus

rospy.init_node("client")

rospy.wait_for_service("Plus")

pub = rospy.ServiceProxy("Plus",plus)

print(pub(1,4))


