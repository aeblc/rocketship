cmake_minimum_required(VERSION 3.10) 
project(Rocketship VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 14)


add_subdirectory(rocketship)

add_executable(exec main.cpp)
target_link_libraries(exec PRIVATE rocket)

