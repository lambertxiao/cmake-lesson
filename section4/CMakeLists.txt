cmake_minimum_required(VERSION 3.10)
project(section4)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 设置外部库的目录
link_directories("/root/libdir/")

# 收集当前目录下的所有文件路径存放到SRC_FILES变量里
aux_source_directory(. SRC_FILES)
add_executable(section4 main.cpp ${SRC_FILES})

# 链接link目录下的libmath.a, 两种写法都可
target_link_libraries(section4 libmath.a)
# target_link_libraries(section4 math.a)

