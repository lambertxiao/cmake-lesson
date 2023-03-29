# 指定cmake最低版本
cmake_minimum_required(VERSION 3.10)
# 指定项目名称
project(section2)

# 设置c++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 生成可执行文件
add_executable(section2 main.cpp)

# 这里告诉cmake要将math以一个独立的库的方式来引入, build时会生成libmath.a
add_subdirectory(math)

# 将math库链接到可执行文件
target_link_libraries(section2 PUBLIC math)

# 这相当于将math目录下的文件都引入到includePath，
# main.cpp此时可以#include<add.h>，而不需要#include<math/add.h>
target_include_directories(section2 PUBLIC 
   "${PROJECT_SOURCE_DIR}/math"
)

# 如果不想写target_include_directories, 则需要在main.cpp里通过#include<math/add.h>这样来引入头文件

