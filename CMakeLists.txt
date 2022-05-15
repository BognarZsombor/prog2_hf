cmake_minimum_required(VERSION 3.20)
project(prog2_hf)

set(CMAKE_CXX_STANDARD 11)

add_definitions(-DMEMTRACE)
#add_executable(prog2_hf main_console.cpp Arveres.cpp Arveres.h Vasarlo.cpp Vasarlo.h Targy.cpp Targy.h VasarloLista.cpp VasarloLista.h memtrace.cpp)
add_executable(prog2_hf main_test.cpp Arveres.cpp Arveres.h Vasarlo.cpp Vasarlo.h Targy.cpp Targy.h VasarloLista.cpp VasarloLista.h memtrace.cpp)
