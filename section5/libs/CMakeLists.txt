cmake_minimum_required(VERSION 3.5)

# 设置项目名和版本号
project(foo VERSION 1.0)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加动态链接库
add_library(foo SHARED foo.h foo.cpp)

# 设置动态链接库的版本号
set_target_properties(foo PROPERTIES VERSION ${PROJECT_VERSION})

# 安装动态链接库和头文件
install(TARGETS foo DESTINATION lib)
install(FILES foo.h DESTINATION include)

