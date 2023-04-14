cmake_minimum_required(VERSION 3.10)
project(section5)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 生成可执行文件
add_executable(section5 main.cpp)

# 这里告诉cmake要将math以一个独立的库的方式来引入, build时会生成libmath.a
add_subdirectory(libs)

# 将foo库链接到可执行文件
target_link_libraries(section5 PUBLIC foo)

