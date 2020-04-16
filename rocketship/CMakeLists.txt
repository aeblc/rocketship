add_library(
    rocket
    src/rocketship/geometry.hpp
    src/rocketship/geometry.cpp
)

target_include_directories(rocket PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")