cmake_minimum_required(VERSION 3.8)
project(doubly_linked_list)

include_directories(
    include
)

set(executable_name dll_example)
set(library_name doubly_linked_list)

add_library(${library_name}
    src/doubly_ll.cpp
    src/iterator.cpp
)

add_executable(${executable_name} src/main.cpp)
target_link_libraries(${executable_name} ${library_name})