from setuptools import find_packages, setup

package_name = 'simple_communication'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='jongbob',
    maintainer_email='jongbob1918@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',

        ],
    },
    entry_points={
        'console_scripts': [
            'robot_status_publisher = simple_communication.robot_status_publisher:main',
            'robot_status_subscriber = simple_communication.robot_status_subscriber:main',
            'robot_info_client = simple_communication.robot_info_client:main',
            'robot_info_service = simple_communication.robot_info_service:main',
        ],
    },
)
