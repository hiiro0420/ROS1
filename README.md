# ROS1の基本的コードがあります

pythonのtopic、service
c++ のtopic、service

# 使用方法

1. ワークスペースのsrcの中にそれぞれのフォルダをおいてください  
例) work_space/src/{c_topic}

2. catkin_make or catkin buildをしてください

3. roscoreを立ち上げる
```bash
roscore
```

4. publisher(service)を実行
```bash
rosrun c_topic talker(server)
```

5. publisher(service)を実行
```bash
rosrun c_topic listener(client)
```

* pythonであれば.pyで実行してください