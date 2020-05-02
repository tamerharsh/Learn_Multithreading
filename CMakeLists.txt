cmake_minimum_required(VERSION 3.4)
Project(multithreading_tutorial CXX)



add_executable(sample sample/sample.cpp)

target_include_directories(sample PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/mylib>  # <prefix>/include/mylib
)
