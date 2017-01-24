cmake_minimum_required(VERSION 2.8.12)
project (teams)

#Bring the headers, such as Team.h into the project
include_directories(include)

#the file(GLOB...) allows for wildcard additions to SOURCES variable
file(GLOB SOURCES "src/*.cpp")

#you can also set SOURCES manually
#set(SOURCES src/Main.cpp src/Team.cpp src/Player.cpp)

add_executable(team ${SOURCES})


