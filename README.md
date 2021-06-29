# ROS RTABMAP-Mapping and Localization
The mobile robot able to perform full slam with the help of rtabmap-ros.

### Installation
If you are working with a native ROS installation or using a VM, some of the following package might need to be installed. You could install them as shown below:
```
$ sudo apt install ros-melodic-rtabmap-ros
```

### Launching
Launch the simulation environment using 
```
$ roslaunch my_robot world.launch
``` 
Note: 
The simulation environment used in this project is much smaller and design specifically to allow fast convergence of rtab-map.
Rtab-map use texture of the environment to detect the mapping location, therefore, for simulation purpose, the world is redesigned with different texture in each room and difference object is being place orderly in different room to avoid repetitive texture and object.


Launch the rtabmap
```
$ roslaunch my_robot mapping.launch
```


Provided mapping is done, and you would like to use rtab_map to perform localization.
```
$ roslaunch my_robot localization.launch
```

### Testing
- Send move command via `teleop` package

### Rviz Interface
![](https://github.com/angcx1997/SLAM_Mapping/blob/main/img/rtab_localization.png)
