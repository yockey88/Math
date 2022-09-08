cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(solver STATIC solver/Solver.cpp)
target_include_directories(solver PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/solver/include)

project(math VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(math main.cpp ${SRC_FILES})
target_link_libraries(math PUBLIC solver)
target_include_directories(math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)