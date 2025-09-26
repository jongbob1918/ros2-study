import rclpy
from rclpy.node import Node
from simple_communication.srv import GetRobotInfo

class RobotInfoService(Node):
    def __init__(self):
        super().__init__('robot_info_service')
        self.srv = self.create_service(GetRobotInfo, 'get_robot_info', self.get_info_callback)

    def get_info_callback(self, request, response):
        response.robot_name = "PatrolBot-001"
        response.status = "Operational"
        response.battery_level = 85.5
        self.get_logger().info('Service request received')
        return response

def main(args=None):
    rclpy.init(args=args)
    robot_info_service = RobotInfoService()
    rclpy.spin(robot_info_service)
    rclpy.shutdown()


if __name__ == '__main__':
    main()