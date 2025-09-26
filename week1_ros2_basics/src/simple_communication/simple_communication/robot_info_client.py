import rclpy 
from rclpy.node import Node
from simple_communication.srv import GetRobotInfo

class RobotInfoClient(Node):
    def __init__(self):
        super().__init__('robot_info_client')
        self.cli = self.create_client(GetRobotInfo, 'get_robot_info')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
            
        self.req = GetRobotInfo.Request()
    
    def send_request(self):
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
    
def main(args=None):
    rclpy.init(args=args)
    robot_info_client = RobotInfoClient()
    response = robot_info_client.send_request()

    if response:
        robot_info_client.get_logger().info(
            f'Robot Info received:\n'
            f'  - Name: {response.robot_name}\n'
            f'  - Status: {response.status}\n'
            f'  - Battery: {response.battery_level}%'
        )

    else:
        robot_info_client.get_logger().error("Exception while calling service")

    robot_info_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
    