cmake_minimum_required(VERSION 3.26)
project(PR2_Tut)

set(CMAKE_CXX_STANDARD 17)

add_executable(PR2_Tut main.cpp
        SmartBarn.cpp
        SmartBarn.h
        ISmartBarn.h
        BarnFSM.cpp
        BarnFSM.h
        BarnFSMTester.cpp
)
