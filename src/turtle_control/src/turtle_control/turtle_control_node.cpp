/**
 * @file turtle_control_node.cpp
 * @brief The node file for turtle_control_node
 */

#include <ros/ros.h>
#include "turtle_control.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "turtle_control");

    TurtleControl tc;

    ros::Rate loop_rate(30);

    while (ros::ok())
    {
        tc.update();
        ros::spinOnce();
        loop_rate.sleep();
    }
}
