CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

INCLUDE_DIRECTORIES( /opt/local/include/cutter /opt/local/include)
LINK_DIRECTORIES(/opt/local/lib)

ADD_LIBRARY(calc STATIC ${PROJECT_SOURCE_DIR}/src/calc.cpp)

INCLUDE(${PROJECT_SOURCE_DIR}/test/CMakeLists.txt)

