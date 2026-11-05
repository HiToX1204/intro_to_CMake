cmake_minimum_required(VERSION 3.16)
project(VisionDemo LANGUAGES CXX)

add_executable(vision_demo
    src/main.cpp
    src/camera.cpp
)

target_compile_features(vision_demo PRIVATE cxx_std_17)
set_target_properties(vision_demo PROPERTIES CXX_EXTENSIONS OFF)

target_include_directories(vision_demo PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)