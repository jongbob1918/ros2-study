import rclpy 
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry

class RealRobotMonitor(Node):
    def __init__(self):
        super().__init__('real_robot_monitor')
        
        # Subscriber for LaserScan data
        self.laser_subscriber = self.create_subscription(
            LaserScan,
            '/scan',
            self.laser_callback,
            10
        )
        
        # Subscriber for Odometry data
        self.odom_subscriber = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10
        )
        
    def laser_callback(self, msg):
        min_distance = min(d for d in msg.ranges if d > 0)
        self.get_logger().info(f'LaserScan received: angle_min={msg.angle_min}, angle_max={msg.angle_max}, min_distance={min_distance}')

    def odom_callback(self, msg):
        position = msg.pose.pose.position
        orientation = msg.pose.pose.orientation
        self.get_logger().info(f'Odometry received: position=({position.x}, {position.y}, {position.z}), orientation=({orientation.x}, {orientation.y}, {orientation.z}, {orientation.w})')

    
def main(args=None):
    rclpy.init(args=args)
    real_robot_monitor = RealRobotMonitor()
    rclpy.spin(real_robot_monitor)
    real_robot_monitor.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()