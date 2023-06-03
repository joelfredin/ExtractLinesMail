cmake_minimum_required(VERSION 3.12)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost REQUIRED COMPONENTS system thread)
find_package(Boost REQUIRED COMPONENTS regex)

include_directories(${Boost_INCLUDE_DIRS})

add_executable(MyExecutable main.cpp)
target_link_libraries(MyExecutable ${Boost_LIBRARIES})