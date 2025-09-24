import rclpy
from rclpy.node import Node
from simple_communication.src import GetRobotInfo

class RobotInfoService(Node):
    def __init__(self):
        super().__init__('robot_info_service')
        self.srv = self.create_service(GetRobotInfo, 'get_robot_info', self.get_info_callback)

    def get_info_callback(self, request, response):
        response.robot_name = "PatrolBot-001"
        response.status = "Operational"
        response.ba
