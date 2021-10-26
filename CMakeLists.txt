
cmake_minimum_required(VERSION 3.8)

project ("Week_2")

add_executable("Week_2" "Vehicle.h" "week2.cpp" "Vehicle.cpp")


set_property(TARGET "Week_2" PROPERTY CXX_STANDARD 11)
set_property(TARGET "Week_2" PROPERTY CXX_STANDARD_REQUIRED ON)