/* date = January 21, 2025 3:51 PM */


#include "ChessPiece.h"

#include <algorithm>

bool ChessPiece::is_empty() const {
    return this->v == NONE;
}

std::string ChessPiece::to_string() {
    std::string ret;
    switch (this->v) {
        case NONE:
            ret = "";
            break;
        case PAWN:
            ret = "p";
            break;
        case BISHOP:
            ret = "b";
            break;
        case KNIGHT:
            ret = "n";
            break;
        case ROOK:
            ret = "r";
            break;
        case QUEEN:
            ret = "q";
            break;
        case KING:
            ret = "k";
            break;
    }

    if (this->c == WHITE) {
        std::ranges::transform(ret, ret.begin(), ::toupper);
    }

    return ret;
}
