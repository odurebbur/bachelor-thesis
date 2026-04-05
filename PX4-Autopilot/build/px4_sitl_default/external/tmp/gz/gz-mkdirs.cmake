# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/isabella-lopiano/PX4-Autopilot/Tools/simulation/gz"
  "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/build_gz"
  "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/external/Install/gz"
  "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/external/tmp/gz"
  "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/external/Stamp/gz"
  "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/external/Download/gz"
  "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/external/Stamp/gz"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/external/Stamp/gz/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/isabella-lopiano/PX4-Autopilot/build/px4_sitl_default/external/Stamp/gz${cfgdir}") # cfgdir has leading slash
endif()
