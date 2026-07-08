cmake_minimum_required(VERSION 3.20...3.28)
project(BankCore VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(libs/client/core)
add_subdirectory(apps/console)
add_subdirectory(apps/server)