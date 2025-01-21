#include <iostream>

#include "ChessBoard.h"

int main() {
    ChessBoard b = ChessBoard();

    std::string fen = b.toFEN();

    std::cout << fen << std::endl;
    return 0;
}
