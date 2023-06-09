# Resolve the dependencies
`rosdep install -i --from-path src --rosdistro humble -y`

`rosdep install -y -r -q --from-paths src --ignore-src --rosdistro humble`

`sudo apt update`

`sudo apt install python3-colcon-common-extensions`

# Transform | Coordinate
Output of the **odom** -> **base_footprint** transform by typing the following command:

`ros2 run tf2_ros tf2_echo odom base_footprint`

To see the coordinate frames, type the following command in a terminal window.

`ros2 run tf2_tools view_frames`

open file:

`evince frames.pdf`

[Frames.pdf](./tf2_tools/frames_2023-05-13_12.49.31.pdf)

# Credit
Automatic Addison

[3D Rotation Converter](https://www.andre-gaschler.com/rotationconverter/)

[How to Install Ubuntu and VirtualBox on a Windows PC](https://automaticaddison.com/how-to-install-ubuntu-and-virtualbox-on-a-windows-pc/)

[How to Install ROS on Ubuntu Linux in 5 Minutes or Less](https://automaticaddison.com/how-to-install-ros-on-ubuntu-linux-in-5-minutes-or-less/)

[The Complete Guide to Linux Fundamentals for Robotics](https://automaticaddison.com/the-complete-guide-to-linux-fundamentals-for-robotics/)

[Mastering Turtlesim in ROS 2](https://automaticaddison.com/mastering-turtlesim-in-ros-2-foxy-fitzroy/)

[How to Create a Workspace | ROS 2](https://automaticaddison.com/how-to-create-a-workspace-ros-2-foxy-fitzroy/)

[How to Install ROS 2 Navigation (Nav2)](https://automaticaddison.com/how-to-install-ros-2-navigation-nav2/)

[The Ultimate Guide to the ROS 2 Navigation Stack](https://automaticaddison.com/the-ultimate-guide-to-the-ros-2-navigation-stack/)

[How to Create a Simulated Mobile Robot in ROS 2 Using URDF](https://automaticaddison.com/how-to-create-a-simulated-mobile-robot-in-ros-2-using-urdf/)

[Robot State Publisher vs. Joint State Publisher](https://automaticaddison.com/robot-state-publisher-vs-joint-state-publisher/)

[How to Make a Mobile Robot in Gazebo](https://automaticaddison.com/how-to-make-a-mobile-robot-in-gazebo-ros2-foxy/)

[Set Up the Odometry for a Simulated Mobile Robot in ROS 2](https://automaticaddison.com/set-up-the-odometry-for-a-simulated-mobile-robot-in-ros-2/)

[Coordinate Frames and Transforms for ROS-based Mobile Robots](https://automaticaddison.com/coordinate-frames-and-transforms-for-ros-based-mobile-robots/)

[Sensor Fusion Using the Robot Localization Package – ROS 2](https://automaticaddison.com/sensor-fusion-using-the-robot-localization-package-ros-2/)

[Set Up LIDAR for a Simulated Mobile Robot in ROS 2](https://automaticaddison.com/set-up-lidar-for-a-simulated-mobile-robot-in-ros-2/)

[Navigation and SLAM Using the ROS 2 Navigation Stack](https://automaticaddison.com/navigation-and-slam-using-the-ros-2-navigation-stack/)



Nav2
------
[Setting Up Odometry](https://navigation.ros.org/setup_guides/odom/setup_odom.html)

[Configuration Guide](https://navigation.ros.org/configuration/index.html)

REP
------
[coordinate-frames](https://www.ros.org/reps/rep-0105.html#coordinate-frames)

WIKI
------
[Differential wheeled robot](https://en.wikipedia.org/wiki/Differential_wheeled_robot)

[robot localization](https://docs.ros.org/en/noetic/api/robot_localization/html/state_estimation_nodes.html) or [sample ekf.yaml file](https://github.com/cra-ros-pkg/robot_localization/blob/humble-devel/params/ekf.yaml)
