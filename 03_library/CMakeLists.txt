cmake_minimum_required(VERSION 3.16)
project(VisionDemo LANGUAGES CXX)

# 相机模块：生成一个静态库目标。
add_library(vision_core STATIC
    src/camera.cpp
)

# 让库自己和使用这个库的目标都得到这些要求。
target_include_directories(vision_core PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)
target_compile_features(vision_core PUBLIC cxx_std_17)
set_target_properties(vision_core PROPERTIES CXX_EXTENSIONS OFF)

# 主程序：只列出自己的源文件。
add_executable(vision_demo src/main.cpp)
set_target_properties(vision_demo PROPERTIES CXX_EXTENSIONS OFF)

# 主程序依赖相机库。
target_link_libraries(vision_demo PRIVATE vision_core)