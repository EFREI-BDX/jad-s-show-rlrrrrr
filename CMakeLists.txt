cmake_minimum_required(VERSION 3.29)
project(jad_s_show)

set(CMAKE_CXX_STANDARD 20)

add_executable(jad_s_show main.cpp
        show/ShowType.h
        show/ShowType.cpp
        show/IShow.h
        show/ConcertShow.h
        show/ConcertShow.h
        show/StreetShow.h
        show/MovieType.cpp
        show/TheaterShow.h
        show/MovieShow.h
        customer/ISpectator.h
        customer/Spectator.cpp)
