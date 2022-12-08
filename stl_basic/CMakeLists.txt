cmake_minimum_required(VERSION 3.10.0)
project(stl_basic)

include_directories(
  include
)

set(executable_name ${PROJECT_NAME})


add_executable(${executable_name} src/main.cpp)
target_link_libraries(${executable_name})