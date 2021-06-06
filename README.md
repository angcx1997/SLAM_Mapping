# GoChaseIt
Ball_chaser node: will run at cmd_vel whenvever client call for services.
Process_image node: subscribe to image published through camera and use the feed to detect presence of white ball. Whenever white ball is detected, the node will call for service at ball_chaser to output appropriate cmd_vel to chase the ball.
### Rviz Setting
![](https://github.com/angcx1997/GoChaseIt/blob/main/img/Rviz_setting.png)

### Final
![](https://github.com/angcx1997/GoChaseIt/blob/main/img/gazebo.png)
