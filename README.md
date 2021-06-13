# ROS AMCL Localisation
The mobile robot able to localise itself in the simulation world through AMCL.

### Installation
If you are working with a native ROS installation or using a VM, some of the following package might need to be installed. You could install them as shown below:
```
$ sudo apt-get install ros-melodic-navigation
$ sudo apt-get install ros-melodic-map-server
$ sudo apt-get install ros-melodic-move-base
$ sudo apt-get install ros-melodic-amcl
```

### Launching
Launch the simulation environment using 
```
$ roslaunch my_robot world.launch
``` 

Launch the amcl(including import map file, move_base, amcl)  
```
$ roslaunch my_robot amcl.launch
```
### Testing
- Send `navigation goal` via RViz
- Send move command via `teleop` package

### Rviz Interface
![](https://github.com/angcx1997/WhereAmI/blob/main/img/localisation.png)
