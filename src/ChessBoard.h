/* date = January 21, 2025 3:51 PM */


#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include <array>
#include <string>

#include "ChessPiece.h"


class ChessBoard {
    std::array<std::array<ChessPiece, 8>, 8> pieces;
    // castling stuff, pawn/capture moves,

public:
    ChessBoard();
    std::string toFEN();
    ChessPiece &getPiece(const std::string &location);
};



#endif //CHESSBOARD_H
