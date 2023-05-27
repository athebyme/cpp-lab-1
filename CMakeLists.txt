cmake_minimum_required(VERSION 3.25)
project(cpp_lab_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_lab_1 main.cpp src/App.cpp src/NumericOperations/Addition.cpp src/NumericOperations/ChangeSign.cpp src/NumericOperations/Complex.cpp src/Matrix/Matrix.h src/Matrix/MatrixLogic.cpp)
