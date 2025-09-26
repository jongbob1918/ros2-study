
##  tf(transform)
- 서로 다른 좌표계에 있는 데이터들을 하나의 공통된 좌표계로 변환해서 의미 있는 정보로 만들기 위해 tf2 (Transform 2)를 사용
- tf2는 모든 좌표계를 트리(Tree) 구조로 관리

### 1. Static Transform (정적 변환) 🔩
- 한번 설정되면 절대 변하지 않는 좌표계 간의 관계
- 예시: 로봇 몸체(base_link)와 그 위에 고정된 카메라(camera_link)의 관계.


### 2. Dynamic Transform (동적 변환) 🏃
- 시간에 따라 계속해서 변하는 좌표계 간의 관계
- 예시: 월드 좌표계(world 또는 map)와 움직이는 로봇의 몸체(base_link)의 관계.

###  tf2_ros라는 패키지
- tf2_ros라는 패키지를 통해 이런 변환 기능들을 쉽게 사용
- tf2_ros.TransformBroadcaster: tf 정보를 발행(publish)할 때 사용합니다. 주로 동적 변환 정보를 계속해서 ROS2 시스템에 알리는 역할을 합니다.

- tf2_ros.StaticTransformBroadcaster: 정적 변환 정보를 발행할 때 사용합니다.

- tf2_ros.TransformListener & Buffer: 다른 노드에서 발행된 tf 정보를 받아서(subscribe) 사용하고 싶을 때 사용합니다. Buffer는 tf 정보를 잠시 저장해두는 공간이고, Listener는 tf 정보를 받아와 Buffer에 채워주는 역할을 합니다.