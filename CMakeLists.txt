cmake_minimum_required(VERSION 3.16)

project(learning_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(learning_cpp main.cpp)

include(GNUInstallDirs)
install(TARGETS learning_cpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
