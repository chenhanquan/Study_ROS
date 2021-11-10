#include <ros/ros.h>                //引入ROS头文件
#include <std_msgs/Float64.h>       //引入描述对象std_msgs::Float64的头文件

int main(int argc, char **argv)     //声明main函数，每个节点必须且只能有一个main函数
{
    ros::init(argc, argv, "minimal_publisher"); // name of this node will be "minimal_publisher"   节点注册
    ros::NodeHandle n;                          // two lines to create a publisher object that can talk to ROS    
    ros::Publisher my_publisher_object = n.advertise<std_msgs::Float64>("topic1", 1);
    //"topic1" is the name of the topic to which we will publish
    // the "1" argument says to use a buffer size of 1; could make larger, if expect network backups

    ros::Rate loop_rate(1); //设置频率1Hz，它会记录从上次调用Rate::sleep()到现在已经有多长时间，并休眠正确的时间。

    std_msgs::Float64 input_float; //create a variable of type "Float64",
    // as defined in: /opt/ros/indigo/share/std_msgs
    // any message published on a ROS topic must have a pre-defined format,
    // so subscribers know how to interpret the serialized data transmission

    input_float.data = 0.0;

    // do work here in infinite loop (desired for this example), but terminate if detect ROS has faulted
    while (ros::ok())
    {
        // this loop has no sleep timer, and thus it will consume excessive CPU time
        // expect one core to be 100% dedicated (wastefully) to this small task
        input_float.data = input_float.data + 0.001; //increment by 0.001 each iteration
        my_publisher_object.publish(input_float);    // publish the value--of type Float64--
        //to the topic "topic1"

        ros::spinOnce(); //此处调用ros::spinOnce()对于这个简单程序来说没啥必要，因为我们没有接收任何回调。然而，如果要在这个程序中添加订阅，但此处没有ros::spinOnce()的话，回调函数将永远不会被调用。所以还是加上吧。

        loop_rate.sleep();
    }
}