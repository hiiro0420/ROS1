#!/usr/bin/env python
import rospy

# 使用するsrvファイルを定義(重要)
from rospy_service.srv import plus, plusResponse

# 関数を定義
def callback(data):

    return data.x + data.y

def service():

    # nodeの名前を決定(なんでもよい)
    rospy.init_node("server",anonymous = False)

    # serviceの名前、srv、関数を定義
    server = rospy.Service("Plus",plus,callback)
    
    rospy.spin()
    
if __name__ == "__main__":
    try:
        service()
    except RosInterruptException:
        pass
        
    