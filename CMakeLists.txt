cmake_minimum_required(VERSION 3.23)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP main.cpp Lab1/Addition.cpp Lab1/Addition.h Runner.cpp Runner.h Lab1/ChangeSign.cpp Lab1/ChangeSign.h Lab1/Complex.cpp Lab1/Complex.h Lab1/MatrixMultiply.cpp Lab1/MatrixMultiply.h)
