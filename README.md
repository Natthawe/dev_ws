# Create a new workspace
`mkdir -p ~/dev_ws/src`

git clone -b humble https://github.com/ros/ros_tutorials.git
cd ~/dev_ws/

# Resolve the dependencies
`rosdep install -i --from-path src --rosdistro humble -y`
`rosdep install -y -r -q --from-paths src --ignore-src --rosdistro humble`
`sudo apt update`
`sudo apt install python3-colcon-common-extensions`

##### Open a new terminal window, and open your .bashrc file:
`gedit ~/.bashrc`
##### Add this line of code to the very bottom of the .bashrc file.
`source ~/dev_ws/install/setup.bash`

# Credit
Automatic Addison

[How to Install Ubuntu and VirtualBox on a Windows PC](https://automaticaddison.com/how-to-install-ubuntu-and-virtualbox-on-a-windows-pc/)

[How to Install ROS on Ubuntu Linux in 5 Minutes or Less](https://automaticaddison.com/how-to-install-ros-on-ubuntu-linux-in-5-minutes-or-less/)

[The Complete Guide to Linux Fundamentals for Robotics](https://automaticaddison.com/the-complete-guide-to-linux-fundamentals-for-robotics/)

[Mastering Turtlesim in ROS 2](https://automaticaddison.com/mastering-turtlesim-in-ros-2-foxy-fitzroy/)

[How to Create a Workspace | ROS 2](https://automaticaddison.com/how-to-create-a-workspace-ros-2-foxy-fitzroy/)

[How to Install ROS 2 Navigation (Nav2)](https://automaticaddison.com/how-to-install-ros-2-navigation-nav2/)

[The Ultimate Guide to the ROS 2 Navigation Stack](https://automaticaddison.com/the-ultimate-guide-to-the-ros-2-navigation-stack/)

