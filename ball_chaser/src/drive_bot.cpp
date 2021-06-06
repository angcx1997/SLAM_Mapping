#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "ball_chaser/DriveToTarget.h"

class BallChaser{
private:
    // Declare ros object
    ros::Publisher motor_command_publisher; 
    ros::ServiceServer cmd_vel_service;

    // Create a motor_command object of type geometry_msgs::Twist
    geometry_msgs::Twist motor_command;

public:
    BallChaser(ros::NodeHandle *n){
        motor_command_publisher = n->advertise<geometry_msgs::Twist>("/cmd_vel", 10);
        cmd_vel_service = n->advertiseService("/ball_chaser/command_robot", &BallChaser::handle_drive_request,this);
        ROS_INFO("Ready to send velocity commands");
    }
    //Error when included destructor, why?
    ~BallChaser(){};

    // This function should publish the requested linear x and angular velocities to the robot wheel joints
    // After publishing the requested velocities, a message feedback should be returned with the requested wheel velocities
    bool handle_drive_request(ball_chaser::DriveToTarget::Request& req, ball_chaser::DriveToTarget::Response& res){
        // ROS_INFO("MotorCommand_Request received - linear_x:%1.2f, angular_z:%1.2f", (float)req.linear_x, (float)req.angular_z);
        
        // Set wheel velocities, forward [0.5, 0.0]
        motor_command.linear.x = req.linear_x;
        motor_command.angular.z = req.angular_z;
        // Publish angles to drive the robot
        motor_command_publisher.publish(motor_command);

         // Return a response message
        res.msg_feedback = "Linear x: " + std::to_string(motor_command.linear.x) + " , Angular z: " + std::to_string(motor_command.angular.z);
        ROS_INFO_STREAM(res.msg_feedback);

    }

};

int main(int argc, char** argv)
{
    // Initialize a ROS node
    ros::init(argc, argv, "drive_bot");

    // Create a ROS NodeHandle object
    ros::NodeHandle n;

    BallChaser bc = BallChaser(&n);

    // TODO: Handle ROS communication events
    ros::spin();

    return 0;
}