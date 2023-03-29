cmake_minimum_required(VERSION 3.10)
project(section3)

# 指定一个编译选项
option(USE_MATH "Use math lib" ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(section3 main.cpp)

if(${USE_MATH})
  add_subdirectory(math)
  list(APPEND EXTRA_LIBS math)
  list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/math")
endif()

target_link_libraries(section3 PUBLIC ${EXTRA_LIBS})
target_include_directories(section3 PUBLIC ${EXTRA_INCLUDES})

configure_file(config.h.in config.h)

