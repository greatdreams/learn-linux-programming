cmake_minimum_required(VERSION 3.10)
project(learn_linux_programming C)

set(CMAKE_C_STANDARD 11)

add_executable(main src/main.c)
add_executable(openfile src/io/openfile.c)
add_executable(inotifyDemo src/io/inotifyDemo.c)