import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jongbob/dev_ws/ros2-study/week1_ros2_basics/src/install/robot_communication'
