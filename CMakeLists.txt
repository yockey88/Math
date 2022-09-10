cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(solver STATIC solver/Solver.cpp)
target_include_directories(solver PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/solver/include)

add_library(complex STATIC complex/Complex.cpp complex/Vector.cpp complex/Quaternion.cpp)
target_include_directories(complex PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/complex/include)

project(math VERSION 1.0)
project(test VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(math main.cpp ${SRC_FILES})
target_link_libraries(math PUBLIC solver)
target_link_libraries(math PUBLIC complex)
target_include_directories(math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/include)

add_executable(test tests.cpp ${SRC_FILES})
target_link_libraries(test PUBLIC solver)
target_link_libraries(test PUBLIC complex)
target_include_directories(test PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)