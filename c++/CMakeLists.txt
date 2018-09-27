cmake_minimum_required (VERSION 3.6)

project (usd_test)

set (CMAKE_CXX_STANDARD 11)

find_package(Boost COMPONENTS filesystem system date_time python27 REQUIRED)
find_package(PythonLibs REQUIRED)

add_definitions(-Wno-missing-braces)
add_definitions(-Wno-deprecated-register)
SET(USD_ROOT /opt/local/USD)
SET(INCLUDE_DIR ${INCLUDE_DIR} ${Boost_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS} ${USD_ROOT}/include)
SET(LINK_LIBS ${Boost_LIBRARIES} ${PYTHON_LIBRARIES})

INCLUDE_DIRECTORIES(${INCLUDE_DIR})

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_library(usd_obj STATIC translator.cpp translator.h streamIO.cpp streamIO.h stream.cpp stream.h fileFormat.cpp fileFormat.h)

target_link_libraries(usd_obj ${LINK_LIBS})

add_executable(run run.cpp)

target_link_libraries(run usd_obj)