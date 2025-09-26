cmake_minimum_required(VERSION 3.8)
project(simple_communication)

# 필요한 빌드 도구들을 찾습니다.
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# srv 폴더의 GetRobotInfo.srv 파일을 사용하여 인터페이스 코드를 생성하라는 명령
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/GetRobotInfo.srv"
)

ament_package()