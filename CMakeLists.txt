cmake_minimum_required(VERSION 3.26)
project(__Logger__)

set(CMAKE_CXX_STANDARD 17)

add_executable(__Logger__ main.cpp
        ILogger.h
        LogToConsole.h
        LogToFile.h
        Calculator.h)
