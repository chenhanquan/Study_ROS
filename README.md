# Study_ROS

此项目记录学习ROS的代码，方便代码框架复用。用的是机械工业出版社的《ROS机器人编程原理与应用》，代码是书上的代码例子，但是由于原本代码所用的ROS版本较旧，而且有部分代码有错误，我将书上的代码重新整理了一下进行学习，使用ubuntu20.04 LTS版本以及ROS（noetic）。

书本源码链接：https://github.com/wsnewman/learning_ros

# 大纲

src  所有软件包

> beginner_tutorials 官方学习例子
> 
> Part1 ROS基础
> + my_minimal_nodes 最小节点
> + example_ros_msg ROS消息
> + custom_msgs ROS自定义消息
> + example_ros_service ROS服务
> + example_ros_class ROS利用cpp类调用发布订阅、服务
> + create_a_ros_library 创建库并调用
> + example_action_server ROS动作服务
> + example_paramter_server ROS参数服务
> 
> Part2 ROS仿真与可视化
> + mobot_urdf urdf模型库
> + minimal_robot_controller 最小机器人描述
> + minimal_joint_controller 最小关节控制器
> + stdr_control stdr 二维仿真控制器
> + example_gazebo_set_state 设置状态例子
> + example_tf_listener 变换侦听器例子
> + example_rviz_marker rviz标志物
> + example_interactive_marker rviz交互式标志物
> + example_eigen eigen库使用例子
>
> Part3 ROS中的感知处理
> + simple_camera_model 最小相机模型
> + example_camera_calibration 相机校准例子
> + lidar_wobbler 扫描雷达和立体相机例子
> + pcl_utils 点云数据处理 （点云未完成，由于我对点云不是很熟悉，rviz没有显示，我不太会弄）
>
> Part4 ROS中的移动机器人
> + mobot_pub_des_state 生成期望状态
> + mobot_gazebo_state 从Gazebo获得模型状态
> + mobot_drifty_odom 里程计
> + localization_w_gps 混合里程计、GPS和惯性传感器
> + mobot_nl_steering 非线性转向算法
> + mpbot_nav_config 路径规划
> + example_nav_plugin 导航栈例子（编译没有通过）
