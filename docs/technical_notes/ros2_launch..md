
## launch 파일

런치 파일은 여러  개의  노드(프로그팬 단위)를 한번에 실행하고, 각 노드의 설정을 관리하는 스크립트


### Launch 파일 사용법 (단계별)

---

#### 1단계: launch 디렉터리 생성 및 파일 작성

 ROS2 패키지 안에 launch라는 이름의 디렉터리를 생성

    # my_package 안에 launch 디렉터리 생성
    cd ~/ros2_ws/src/my_package
    mkdir launch

    # Python 런치 파일 생성
    touch launch/my_first.launch.py

#### 2단계: 런치 파일 내용 작성

 생성한 파일 안에 어떤 노드를 어떻게 실행할지 정의

    from launch import LaunchDescription
    from launch_ros.actions import Node

    def generate_launch_description():
        # LaunchDescription 객체는 최종 런치 파일을 표현합니다.
        return LaunchDescription([
            # turtlesim_node 실행
            Node(
                package='turtlesim',
                executable='turtlesim_node',
                name='sim'  # 노드 이름 지정
            ),
            # turtle_teleop_key 노드 실행
            Node(
                package='turtlesim',
                executable='turtle_teleop_key',
                name='teleop',
                # 별도의 터미널에서 실행되도록 설정
                prefix='xterm -e'
            )
        ])


#### 3단계: 패키지 빌드 및 설치
setup.py (Python 패키지) 또는 CMakeLists.txt (C++ 패키지)에 런치 파일을 설치하도록 설정하는 코드를 추가


    import os
    from glob import glob
    from setuptools import setup

    package_name = 'my_package'

    setup(
        # ... 다른 설정들 ...
        data_files=[
            # ...
            # launch 디렉터리 안의 모든 .launch.py 파일을 설치
            (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
        ],
    )




#### 4단계: Python Launch vs. XML Launch
ROS2에서는 주로 Python과 XML, 두 가지 형식으로 런치 파일을 작성할 수 있습니다. 둘의 가장 큰 차이는 **유연성**과 **복잡성**에 있습니다.

결론: 무엇을 선택해야 할까? 🤔
단순함이 최고라면 XML: 몇 개의 노드를 고정된 설정으로 실행하는 것이 전부라면, XML이 더 빠르고 직관적인 선택이 될 수 있습니다.

유연성과 확정성이 필요하다면 Python: 대부분의 현대적인 ROS2 프로젝트에서는 Python 런치 파일을 선호합니다. 조건부 노드 실행, 파라미터 동적 생성, 다른 런치 파일 포함 등 훨씬 강력하고 유연한 기능을 제공하기 때문입니다.

결론적으로, 초보자는 간단한 XML로 시작하여 런치 파일의 개념을 익히고, 시스템이 복잡해짐에 따라 Python으로 전환하는 것이 좋은 학습 경로입니다.