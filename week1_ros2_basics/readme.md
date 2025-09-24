# Week 1-2 상세 학습 방법

## 전체 목표 및 성공 기준

### Bronze (최소 목표 - 7일 완성)
- [ ] ROS2 기본 노드 통신 성공
- [ ] 실습장 로봇과 PC 연결 확인
- [ ] 간단한 2D LiDAR 맵핑 완료

### Silver (표준 목표 - 10일 완성)
- [ ] tf2 좌표 변환 완전 이해
- [ ] Navigation2 기본 사용법 숙지
- [ ] 실습장 전체 맵 품질 80% 이상

### Gold (심화 목표 - 14일 완성)
- [ ] Depth 카메라 통합 고품질 맵핑
- [ ] 맵 최적화 및 성능 튜닝
- [ ] 다양한 SLAM 알고리즘 비교 분석

---

## Day 1-2: 환경 설정 및 ROS2 기초

### Day 1 오후 (실습장 5시간)

#### 환경 점검 및 설정 (2시간)
**체크리스트:**
- [ ] Ubuntu 22.04 ROS2 Humble 설치 확인
- [ ] 실습장 로봇 하드웨어 점검 (2D LiDAR, 모터 동작)
- [ ] 네트워크 연결 테스트

**실습 명령어:**
```bash
# ROS2 설치 확인
ros2 --version
ros2 topic list

# 로봇과 통신 테스트
ros2 topic echo /scan
ros2 topic echo /odom
```

#### 첫 번째 ROS2 노드 작성 (3시간)
**목표:** Publisher/Subscriber 개념 완전 이해

**단계별 실습:**
1. **워크스페이스 생성 (30분)**
```bash
cd robot_projects/week1_ros2_basics
mkdir -p src
cd src
ros2 pkg create --build-type ament_python simple_communication
```

2. **Publisher 노드 작성 (60분)**
```python
# src/simple_communication/simple_communication/robot_status_publisher.py
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
```

3. **Subscriber 노드 작성 (60분)**
```python
# src/simple_communication/simple_communication/robot_status_subscriber.py
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class RobotStatusSubscriber(Node):
    def __init__(self):
        super().__init__('robot_status_subscriber')
        self.subscription = self.create_subscription(
            String, 'robot_status', self.status_callback, 10)

    def status_callback(self, msg):
        self.get_logger().info(f'Received: {msg.data}')

def main():
    rclpy.init()
    node = RobotStatusSubscriber()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
```

4. **테스트 및 디버깅 (30분)**
```bash
# 터미널 1
ros2 run simple_communication robot_status_publisher

# 터미널 2
ros2 run simple_communication robot_status_subscriber

# 터미널 3 - 데이터 확인
ros2 topic echo /robot_status
```

### Day 1 저녁 (집 5시간)

#### Gemini 활용 학습 (2시간)
**질문 템플릿:**
```
"ROS2의 Publisher/Subscriber 패턴을 초보자도 이해할 수 있게 한국어로 설명해줘. 
실제 로봇에서 어떻게 활용되는지 구체적인 예시도 포함해서"
```

**정리할 내용:**
- 비동기 통신의 장점
- Topic의 개념과 naming convention
- QoS (Quality of Service) 기본 개념

#### setup.py 및 패키지 구조 이해 (1시간)
```python
# setup.py 수정
entry_points={
    'console_scripts': [
        'robot_status_publisher = simple_communication.robot_status_publisher:main',
        'robot_status_subscriber = simple_communication.robot_status_subscriber:main',
    ],
},
```

#### 내일 계획 수립 및 회고 작성 (30분)
```bash
cp docs/daily_logs/daily_reflection_template.md docs/daily_logs/week1/day1_reflection.md
```

#### Service/Client 개념 예습 (1.5시간)
**Gemini 질문:**
```
"ROS2 Service와 Topic의 차이점을 표로 정리해주고, 
Service/Client 패턴을 사용하는 구체적인 예시를 보여줘"
```

### Day 2 오후 (실습장 5시간)

#### Service/Client 구현 (3시간)
**목표:** 동기적 통신 방식 이해

**실습 순서:**
1. **서비스 정의 파일 생성 (45분)**
```bash
mkdir -p src/simple_communication/srv
```

```
# srv/GetRobotInfo.srv
---
string robot_name
string status
float32 battery_level
```

2. **Service Server 구현 (90분)**
```python
# robot_info_service.py
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
```

3. **Service Client 구현 (45분)**
```python
# robot_info_client.py
import rclpy
from rclpy.node import Node
from simple_communication.srv import GetRobotInfo

class RobotInfoClient(Node):
    def __init__(self):
        super().__init__('robot_info_client')
        self.cli = self.create_client(GetRobotInfo, 'get_robot_info')

    def send_request(self):
        req = GetRobotInfo.Request()
        future = self.cli.call_async(req)
        return future
```

#### 실제 로봇 데이터 연동 (2시간)
**목표:** 로봇의 실제 센서 데이터 활용

**실습 내용:**
```python
# real_robot_data.py
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry

class RealRobotMonitor(Node):
    def __init__(self):
        super().__init__('real_robot_monitor')
        self.laser_sub = self.create_subscription(LaserScan, '/scan', self.laser_callback, 10)
        self.odom_sub = self.create_subscription(Odometry, '/odom', self.odom_callback, 10)

    def laser_callback(self, msg):
        # 가장 가까운 장애물 거리 계산
        min_distance = min([d for d in msg.ranges if d > 0])
        self.get_logger().info(f'Closest obstacle: {min_distance:.2f}m')

    def odom_callback(self, msg):
        # 현재 위치 출력
        x = msg.pose.pose.position.x
        y = msg.pose.pose.position.y
        self.get_logger().info(f'Current position: x={x:.2f}, y={y:.2f}')
```

### Day 2 저녁 (집 5시간)

#### tf2 개념 학습 (3시간)
**Gemini 활용:**
```
"ROS2 tf2 transformation을 초보자도 이해할 수 있게 설명해줘.
parent frame, child frame, static transform, dynamic transform의 차이점을 포함해서"
```

**핵심 개념 정리:**
- 좌표계 변환의 필요성
- Transform tree 구조
- tf2_ros 패키지 사용법

#### tf2 실습 코드 준비 (1.5시간)
```python
# tf2_broadcaster.py (내일 테스트용)
import rclpy
from rclpy.node import Node
from tf2_ros import TransformBroadcaster
from geometry_msgs.msg import TransformStamped

class TF2Broadcaster(Node):
    def __init__(self):
        super().__init__('tf2_broadcaster')
        self.tf_broadcaster = TransformBroadcaster(self)
        self.timer = self.create_timer(0.1, self.broadcast_timer_callback)

    def broadcast_timer_callback(self):
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'base_link'
        t.child_frame_id = 'laser_frame'
        # Transform 정보 설정
        t.transform.translation.x = 0.1
        t.transform.translation.y = 0.0
        t.transform.translation.z = 0.2
        self.tf_broadcaster.sendTransform(t)
```

#### GitHub 정리 (30분)
```bash
git add .
git commit -m "[Week1-Day2] Service/Client implementation and real robot data integration"
```

---

## Day 3-4: tf2 변환 시스템 마스터

### Day 3 오후 (실습장 5시간)

#### tf2 기본 구현 (2.5시간)
**목표:** 로봇의 모든 좌표계 이해

**실습 순서:**
1. **Static Transform 설정**
```bash
ros2 run tf2_ros static_transform_publisher 0.1 0 0.2 0 0 0 base_link laser_frame
```

2. **tf2 Listener 구현**
```python
# tf2_listener.py
import rclpy
from rclpy.node import Node
from tf2_ros import TransformListener, Buffer
from geometry_msgs.msg import PointStamped

class TF2Listener(Node):
    def __init__(self):
        super().__init__('tf2_listener')
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.timer = self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        try:
            # base_link에서 laser_frame으로의 변환
            transform = self.tf_buffer.lookup_transform(
                'base_link', 'laser_frame', rclpy.time.Time())
            self.get_logger().info(f'Transform: {transform.transform.translation}')
        except Exception as e:
            self.get_logger().error(f'Transform lookup failed: {e}')
```

#### 실제 로봇에 적용 (2.5시간)
**목표:** 로봇의 센서 데이터를 통합된 좌표계에서 처리

```python
# integrated_sensor_data.py
class IntegratedSensorProcessor(Node):
    def __init__(self):
        super().__init__('integrated_sensor_processor')
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        
        # 여러 센서 구독
        self.laser_sub = self.create_subscription(LaserScan, '/scan', self.process_laser, 10)
        self.camera_sub = self.create_subscription(Image, '/camera/image', self.process_image, 10)

    def process_laser(self, laser_msg):
        # 레이저 데이터를 base_link 좌표계로 변환
        # 변환된 데이터 처리 로직
        pass
```

### Day 3 저녁 (집 5시간)

#### Launch 파일 시스템 학습 (2시간)
**Gemini 질문:**
```
"ROS2 Launch 파일의 구조와 사용법을 단계별로 설명해줘.
Python launch와 XML launch의 차이점도 포함해서"
```

#### Launch 파일 작성 실습 (2시간)
```python
# launch/robot_communication.launch.py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='simple_communication',
            executable='robot_status_publisher',
            name='status_publisher'
        ),
        Node(
            package='simple_communication',
            executable='robot_status_subscriber',
            name='status_subscriber'
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            arguments=['0.1', '0', '0.2', '0', '0', '0', 'base_link', 'laser_frame']
        )
    ])
```

#### Parameter 시스템 학습 (1시간)
```python
# parameter_node.py
class ParameterNode(Node):
    def __init__(self):
        super().__init__('parameter_node')
        self.declare_parameter('robot_name', 'default_robot')
        self.declare_parameter('max_speed', 1.0)
        
        # Parameter 사용
        robot_name = self.get_parameter('robot_name').get_parameter_value().string_value
        max_speed = self.get_parameter('max_speed').get_parameter_value().double_value
```

### Day 4 오후 (실습장 5시간)

#### SLAM 환경 준비 (1.5시간)
**목표:** Navigation2 스택 이해 및 설치

**설치 및 설정:**
```bash
sudo apt install ros-humble-navigation2 ros-humble-nav2-bringup
sudo apt install ros-humble-slam-toolbox
```

**기본 설정 파일 준비:**
```yaml
# config/nav2_params.yaml
controller_server:
  ros__parameters:
    controller_frequency: 20.0
    min_x_velocity_threshold: 0.001
    min_y_velocity_threshold: 0.5
    min_theta_velocity_threshold: 0.001
    # ... 기타 파라미터
```

#### 첫 SLAM 시도 (3.5시간)
**목표:** 실습장에서 실제 맵 생성

**실행 순서:**
1. **로봇 기본 드라이버 실행**
```bash
# 터미널 1 - 로봇 드라이버
ros2 launch turtlebot3_bringup robot.launch.py
```

2. **SLAM 실행**
```bash
# 터미널 2 - SLAM
ros2 launch slam_toolbox online_async_launch.py
```

3. **텔레옵으로 로봇 조종**
```bash
# 터미널 3 - 수동 조종
ros2 run teleop_twist_keyboard teleop_twist_keyboard
```

4. **RViz로 맵 확인**
```bash
# 터미널 4 - 시각화
rviz2 -d $(ros2 pkg prefix nav2_bringup)/share/nav2_bringup/rviz/nav2_default_view.rviz
```

**주의사항 및 트러블슈팅:**
- 로봇이 너무 빠르게 움직이면 맵 품질 저하
- Loop closure 를 위해 같은 지점을 여러 번 지나가기
- 맵 저장: `ros2 run nav2_map_server map_saver_cli -f my_map`

### Day 4 저녁 (집 5시간)

#### SLAM 이론 깊이 이해 (2시간)
**Gemini 활용:**
```
"SLAM (Simultaneous Localization and Mapping)의 동작 원리를 단계별로 설명해줘.
Particle Filter, EKF SLAM, Graph SLAM의 차이점도 포함해서"
```

**정리할 내용:**
- SLAM 문제의 본질
- Localization vs Mapping
- Loop Closure Detection
- 다양한 SLAM 알고리즘 비교

#### 맵 품질 향상 방법 연구 (2시간)
**학습 내용:**
- SLAM 파라미터 튜닝 방법
- 센서 데이터 전처리 기법
- 맵 후처리 기술

#### 내일 계획 및 문제점 정리 (1시간)
**회고 작성:**
- 오늘 SLAM에서 겪은 문제점
- 맵 품질이 떨어진 구간 분석
- 내일 개선할 방법

---

## Day 5-7: 고급 SLAM 및 센서 융합

### Day 5 오후 (실습장 5시간)

#### Depth 카메라 통합 (3시간)
**목표:** 2D LiDAR + Depth 카메라 융합

**하드웨어 설정:**
```bash
# Depth 카메라 드라이버 설치 (RealSense 예시)
sudo apt install ros-humble-realsense2-camera
```

**센서 융합 노드 작성:**
```python
# multi_sensor_slam.py
class MultiSensorSLAM(Node):
    def __init__(self):
        super().__init__('multi_sensor_slam')
        
        # 구독자들
        self.laser_sub = self.create_subscription(LaserScan, '/scan', self.laser_callback, 10)
        self.depth_sub = self.create_subscription(Image, '/camera/depth/image_raw', self.depth_callback, 10)
        self.rgb_sub = self.create_subscription(Image, '/camera/color/image_raw', self.rgb_callback, 10)
        
        # 데이터 동기화
        self.laser_data = None
        self.depth_data = None
        self.rgb_data = None

    def laser_callback(self, msg):
        self.laser_data = msg
        self.process_fused_data()

    def depth_callback(self, msg):
        self.depth_data = msg
        self.process_fused_data()

    def process_fused_data(self):
        if self.laser_data and self.depth_data:
            # 센서 데이터 융합 로직
            pass
```

#### 맵 품질 개선 (2시간)
**실습 내용:**
- 다양한 속도로 맵핑 테스트
- 조명 조건별 성능 비교
- 동적 객체 필터링

### Day 5 저녁 (집 5시간)

#### Navigation2 스택 심화 학습 (3시간)
**Gemini 질문:**
```
"ROS2 Navigation2 스택의 전체 아키텍처를 설명해줘.
각 컴포넌트(planner, controller, recovery)의 역할과 상호작용을 포함해서"
```

**핵심 컴포넌트 이해:**
- Global Planner (NavFn, Smac)
- Local Planner (DWB, TEB)
- Recovery Behaviors
- Costmap 시스템

#### 내일 테스트용 시나리오 설계 (2시간)
**계획할 내용:**
- 복잡한 환경에서의 SLAM 테스트
- 성능 측정 방법
- 다양한 파라미터 조합 실험

### Day 6-7: SLAM 최적화 및 성능 튜닝

#### 성능 최적화 실험
**측정할 지표:**
- 맵 정확도 (RMSE)
- 처리 속도 (Hz)
- 메모리 사용량
- Loop Closure 성공률

#### 다양한 SLAM 알고리즘 비교
- SLAM Toolbox vs Cartographer
- 실시간 성능 vs 맵 품질 trade-off
- 각 알고리즘의 장단점 분석

---

## 매일 반복할 루틴

### 오후 실습 시작 전 (15분)
1. **어제 회고 검토**: 해결하지 못한 문제 확인
2. **오늘 목표 명확화**: Bronze/Silver/Gold 중 목표 레벨 설정
3. **필요한 자료 준비**: Gemini로 개념 정리 요청

### 실습 중 문제 해결 프로세스
1. **30분 자력 해결 시도**
2. **AI에게 질문** (Claude/Gemini)
3. **15분 더 시도**
4. **다른 접근 방법 검토**

### 저녁 정리 시간 (30분)
1. **GitHub 커밋**: 오늘 작성한 코드 정리
2. **회고 작성**: 배운 것, 막힌 것, 내일 할 것
3. **내일 준비**: 필요한 자료 미리 검색

### 주간 정리 (Week 2 마지막 일요일 1시간)
1. **전체 성과 점검**: Bronze/Silver/Gold 달성도
2. **GitHub README 업데이트**: 진행 상황 체크리스트
3. **다음 주 계획 조정**: 진도에 따른 일정 수정

---

## 성공을 위한 핵심 팁

### 학습 효율성
1. **개념 이해 우선**: 동작 원리가 그려져야 코딩 가능
2. **실패 두려워하지 않기**: 에러는 학습의 기회
3. **작은 단위로 테스트**: 한 번에 모든 기능 구현 금지

### 실습 품질
1. **실제 로봇 테스트 필수**: 시뮬레이션만으로는 부족
2. **다양한 환경에서 테스트**: 로봇이 실제 사용될 조건 고려
3. **성능 측정 습관화**: 정량적 평가 기준 설정

### 문서화
1. **매일 커밋**: 작은 진전도 기록
2. **README 업데이트**: 다른 사람이 이해할 수 있게
3. **회고의 질**: 구체적이고 실행 가능한 내용 작성

이렇게 체계적으로 진행하면 Week 1-2에서 ROS2와 SLAM을 완전히 마스터할 수 있습니다!