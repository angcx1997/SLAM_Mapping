# GoChaseIt
The mobile robot would try to get to the white ball after it being detected through the camera on-board. 

Ball_chaser node: will run at cmd_vel whenvever client call for services.

Process_image node: subscribe to image published through camera and use the feed to detect presence of white ball. Whenever white ball is detected, the node will call for service at ball_chaser to output appropriate cmd_vel to chase the ball.

### How to launch the simulation
Launch the simulation environment using 
  $ roslaunch my_robot world.launch 

To interact with the robot
  $ roslaunch ball_chaser ball_chaser.launch

Move the white ball in the gazebo and see the action performed by the robot.

### Rviz Setting
![](https://github.com/angcx1997/GoChaseIt/blob/main/img/Rviz_setting.png)

### Simulation Interface
![](https://github.com/angcx1997/GoChaseIt/blob/main/img/gazebo.png)
