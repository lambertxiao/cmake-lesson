# cmake 使用指北

## section1

介绍一些cmake的基本命令以及如何使用cmake编译单个cpp文件, 主要包含命令

- cmake_minimum_required 
  指定cmake的版本
- project 
  指定项目名称
- set 
  设置变量
- add_executable 
  生成可执行文件

## section2

介绍如何使用cmake添加一个library，主要包含命令

- add_subdirectory 
  添加一个目录，cmake会去解析这个目录底下的CMakeLists.txt文件
- target_link_libraries 
  链接依赖库到可执行文件
- target_include_directories 
  将需要include的目录告诉可执行文件

## section3

介绍如何在cmake里使用编译参数和条件判断，主要包括命令

- option 
  设置编译参数
- if 
  条件判断
- endif 
  条件判断
- configure_file 
  设置配置文件

## section4

介绍如何链接外部依赖库以及多文件编译方式，主要包括命令

- aux_source_directory 
  收集指定目录底下的源码文件路径到某个变量
- link_directories 
  指定需要链接的库的所在目录

