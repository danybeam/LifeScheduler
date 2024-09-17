# CMakeList to glue together external libraries

add_subdirectory("libLifeSchedulerFramework")
add_subdirectory("raylib")
add_subdirectory("raylib-cpp")

# Hack to add only raygui.h file
add_library(raygui INTERFACE)
target_include_directories(raygui INTERFACE
	"${CMAKE_CURRENT_LIST_DIR}/raygui/src"
)

# Make sure googletest is only added if topmost project
if(BUILD_TESTING AND (${CMAKE_PROJECT_NAME} STREQUAL ${PROJECT_NAME}))
	set(gtest_force_shared_crt on)
	add_subdirectory("googletest")
endif()