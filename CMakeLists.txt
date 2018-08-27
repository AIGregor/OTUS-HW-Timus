cmake_minimum_required(VERSION 3.2)

project(TimusTasks)

add_executable(Otus-HW2 Otus-HW2-HightBinPow.cpp)
add_executable(T1000  Timus-1000.cpp)
add_executable(T1001  Timus-1001.cpp)
add_executable(T1068  Timus-1068.cpp)
add_executable(T1131  Timus-1131.cpp)
add_executable(T1180  Timus-1180.cpp)
add_executable(T1196  Timus-1196.cpp)
add_executable(T1197  Timus-1197.cpp)
add_executable(T1209  Timus-1209.cpp)
add_executable(T1264  Timus-1264.cpp)
add_executable(T1293  Timus-1293.cpp)
add_executable(T1409  Timus-1409.cpp)
add_executable(T1585  Timus-1585.cpp)
add_executable(T1636  Timus-1636.cpp)
add_executable(T1785  Timus-1785.cpp)
add_executable(T1787  Timus-1787.cpp)
add_executable(T1820  Timus-1820.cpp)
add_executable(T1877  Timus-1877.cpp)
add_executable(T1880  Timus-1880.cpp)
add_executable(T1910  Timus-1910.cpp)
add_executable(T1924  Timus-1924.cpp)
add_executable(T2001  Timus-2001.cpp)
add_executable(T2012  Timus-2012.cpp)
add_executable(T2023  Timus-2023.cpp)
add_executable(T2066  Timus-2066.cpp)
add_executable(T2100  Timus-2100.cpp)
add_executable(T1837  Timus-1837.cpp)
add_executable(T1496  Timus-1496.cpp)
add_executable(T1545  Timus-1545.cpp)
add_executable(OTUS3 OTUS-3.cpp)

set_target_properties(	Otus-HW2
						T1000
						T1001
						T1068
						T1131
						T1180
						T1196
						T1197
						T1209
						T1264
						T1293
						T1409
						T1585
						T1636
						T1785
						T1787
						T1820
						T1877
						T1880
						T1910
						T1924
						T2001
						T2012
						T2023
						T2066
						T2100
						T1837
						T1496
						T1545
			PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        )