#!/usr/bin/env python
import rospy

from rospy_service.srv import plus, plusResponse

def callback(data):

    return data.x + data.y

def service():

    rospy.init_node("server",anonymous = False)
    server = rospy.Service("Plus",plus,callback)
    
    rospy.spin()
    
if __name__ == "__main__":
    try:
        service()
    except RosInterruptException:
        pass
        
    