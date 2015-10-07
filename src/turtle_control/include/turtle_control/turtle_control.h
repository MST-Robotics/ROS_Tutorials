/**
 * @file turtle_control.h
 * @class TurtleControl
 * @brief The header file for the TurtleControl class which was made for the MS&T Robotics team ROS tutorials
 */

#ifndef TURTLE_CONTROL_H
#define TURTLE_CONTROL_H

#include <ros/ros.h>
#include <turtlesim/Pose.h>
#include <turtlesim/Spawn.h>
#include <geometry_msgs/Twist.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>

class TurtleControl
{
private:
    geometry_msgs::Twist cmd_vel;

    ros::NodeHandle nh; 

    ros::Subscriber pose_sub;
    ros::Subscriber goal_pose_sub;

    ros::Publisher twist_pub;

    turtlesim::Pose pose;

    void poseCallback(const turtlesim::Pose::ConstPtr& msg);
    void goalPoseCallback(const turtlesim::Pose::ConstPtr& msg);

public:
    TurtleControl();

    void update();
};

#endif //TURTLE_CONTROL_H
