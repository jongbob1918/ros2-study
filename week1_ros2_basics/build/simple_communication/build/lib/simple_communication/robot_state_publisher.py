# ROS 2의 C++ 클라이언트 라이브러리인 rcl을 파이썬에서 사용할 수 있도록 감싼(wrapping) 라이브러리
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class RobotStatusPublisher(Node):
    def __init__(self):
        super().__init__('robot_status_publisher')
        self.publisher = self.create_publisher(String, 'robot_status', 10)
        self.timer = self.create_timer(1.0, self.publish_status)
        self.counter = 0

    def publish_status(self):
        msg = String()
        msg.data = f'Robot is running... Count: {self.counter}'
        self.publisher.publish(msg)
        self.get_logger().info(f'Publishing: {msg.data}')
        self.counter += 1

def main():
    rclpy.init()
    node = RobotStatusPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()