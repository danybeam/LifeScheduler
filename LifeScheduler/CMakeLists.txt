# CMakeList.txt : CMake project for LifeScheduler, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (LifeScheduler "LifeScheduler.cpp" "LifeScheduler.h")

target_include_directories(LifeScheduler PRIVATE
"$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>"
)

target_link_libraries(LifeScheduler PRIVATE
	libLifeSchedulerFramework
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET LifeScheduler PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
