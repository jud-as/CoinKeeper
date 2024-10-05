cmake_minimum_required(VERSION 3.28)
project(CoinKeeper C)

set(CMAKE_C_STANDARD 99)

add_executable(CoinKeeper
        scr/main.c
        scr/gasto.c
        include/gasto.h
        scr/user.c
        include/user.h
        include/data.h
)
