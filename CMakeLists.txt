cmake_minimum_required(VERSION 3.15)
project(ComputerGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(ComputerGame main.cpp Game.cpp Game.h Nim.cpp Nim.h TicTacToe.cpp TicTacToe.h)