﻿# CMakeList.txt : CMake project for AERSP424_Final, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (AERSP424_Final "AERSP424_Final.cpp" "AERSP424_Final.h" "spacing.cpp" "spacing.h" "text.cpp" "text.h" "game.cpp" "game.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET AERSP424_Final PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
