from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()


    nav2_through_poses = Node(
        package="mobile_robot",
        executable="nav2_through_poses.py",
        name="nav2_through_poses"
    )

    ld.add_action(nav2_through_poses)

    return ld