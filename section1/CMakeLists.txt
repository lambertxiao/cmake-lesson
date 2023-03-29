# 指定cmake最低版本
cmake_minimum_required(VERSION 3.10)
# 指定项目名称
project(section1)
# 指向项目名称+版本号
# project(Tutorial VERSION 1.0)

# 设置c++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 生成可执行文件
add_executable(section1 main.cpp)
#
