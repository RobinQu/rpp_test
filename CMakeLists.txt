cmake_minimum_required(VERSION 3.28)
project(rpp_test)

set(CMAKE_CXX_STANDARD 17)

add_executable(rpp_test main.cpp)

add_subdirectory(rpp)
target_link_libraries(rpp_test RPP::rpp)
