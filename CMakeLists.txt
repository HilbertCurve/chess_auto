cmake_minimum_required(VERSION 3.30)
project(chess_auto)

set(CMAKE_CXX_STANDARD 20)

add_executable(chess_auto src/main.cpp
        src/ChessBoard.cpp
        src/ChessBoard.h
        src/ChessPiece.cpp
        src/ChessPiece.h)
