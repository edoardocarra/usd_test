cmake_minimum_required (VERSION 3.6)

project (usd_test)

set(CMAKE_CXX_STANDARD 11)

add_definitions(-Wno-missing-braces)
add_definitions(-Wno-deprecated-register)

set(USD_ROOT /opt/local/USD)

link_directories(${USD_ROOT}/lib)
include_directories(${USD_ROOT}/include)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_executable(run run.cpp)

target_link_libraries(run usd usdGeom usdUtils sdf vt tf gf)