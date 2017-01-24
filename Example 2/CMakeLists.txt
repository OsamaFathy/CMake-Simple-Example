cmake_minimum_required(VERSION 2.8.12)
project (teams)
set(CMAKE_BUILD_TYPE Release)

#Bring the headers, such as Team.h into the project
include_directories(include)

#the file(GLOB...) allows for wildcard additions to SOURCES variable
file(GLOB SOURCES "src/*.cpp")

#Generate the shared library from the sources
add_library(team SHARED ${SOURCES})
