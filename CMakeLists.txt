cmake_minimum_required(VERSION 3.28)
project(demo_qt_cmake)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 REQUIRED COMPONENTS Widgets Gui)
qt6_standard_project_setup()

qt_add_executable(demo_qt_cmake main.cpp)
target_link_libraries(demo_qt_cmake PRIVATE Qt6::Widgets Qt6::Gui)

add_custom_command(TARGET demo_qt_cmake POST_BUILD COMMAND Qt6::windeployqt ARGS $<TARGET_FILE:demo_qt_cmake>)