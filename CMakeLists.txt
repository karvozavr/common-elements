cmake_minimum_required(VERSION 3.0)
project(common_elements)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCE_FILES "src/*.cpp")

add_executable(common_elements ${SOURCE_FILES})
target_include_directories(common_elements PRIVATE include)