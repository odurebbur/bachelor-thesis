# - Config file for the OpticalFlow package
# It defines the following variables
#  OpticalFlow_INCLUDE_DIRS - include directories
#  OpticalFlow_LIBRARIES    - libraries to link against
 
set(OpticalFlow_INCLUDE_DIRS "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/OpticalFlow/install/include")
#set(OpticalFlow_LIBRARY_DIR "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/OpticalFlow/install/lib")
FIND_LIBRARY(OpticalFlow_LIBRARIES OpticalFlow PATHS "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/OpticalFlow/install/lib" NO_DEFAULT_PATH)
