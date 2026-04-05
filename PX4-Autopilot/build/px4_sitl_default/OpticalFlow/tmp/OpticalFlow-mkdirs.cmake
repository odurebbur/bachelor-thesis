# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/OpticalFlow/src/OpticalFlow"
  "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/OpticalFlow/src/OpticalFlow-build"
  "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/OpticalFlow/install"
  "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/OpticalFlow/tmp"
  "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/OpticalFlow/src/OpticalFlow-stamp"
  "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/OpticalFlow/src"
  "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/OpticalFlow/src/OpticalFlow-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/OpticalFlow/src/OpticalFlow-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/OpticalFlow/src/OpticalFlow-stamp${cfgdir}") # cfgdir has leading slash
endif()
