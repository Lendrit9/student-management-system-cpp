cmake_minimum_required(VERSION 3.16)
project(StudentManager CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(StudentManager
    src/main.cpp
)


add_executable(StudentManager
    src/main.cpp
    src/StudentRepository.cpp
    src/FileStorage.cpp
    src/Menu.cpp
)
