cmake_minimum_required(VERSION 3.2)

project(TimusTasks)

add_executable(Otus-HW2 Otus-HW2-HightBinPow.cpp)
add_executable(T1409 Timus-1409.cpp)
add_executable(T1000 Timus-1000.cpp)
add_executable(T1264 Timus-1264.cpp)
add_executable(T1293 Timus-1293.cpp)
add_executable(T1785 Timus-1785.cpp)
add_executable(T1787 Timus-1787.cpp)
add_executable(T1877 Timus-1877.cpp)
add_executable(T2001 Timus-2001.cpp)
add_executable(T2012 Timus-2012.cpp)
add_executable(OTUS3 OTUS-3.cpp)

set_target_properties(Otus-HW2 T1409 T1000 T1264 
					T1293 T1785 T1787 T1877 T2001 
					T2012 OTUS3 PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        )	