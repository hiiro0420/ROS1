#!/usr/bin/env python

import rospy

# 使用するsrvファイルを定義(重要)
from rospy_service.srv import plus

# ノードの名前を定義
rospy.init_node("client")

# Plusという名前のサービスが立ち上がるまで待機
rospy.wait_for_service("Plus")

# Plusという名前のサービスとplusという名前のsrvファイルを使用することを定義
pub = rospy.ServiceProxy("Plus",plus)

# サービスへと値を送る
print(pub(1,4))


