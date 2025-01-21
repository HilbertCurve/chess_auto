/* date = January 21, 2025 3:51 PM */


#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <string>


class ChessPiece {
public:
    enum Variant {
        NONE,
        PAWN,
        BISHOP,
        KNIGHT,
        ROOK,
        QUEEN,
        KING,
    };
    enum Color {
        BLACK,
        WHITE,
    };

    ChessPiece() : v(NONE), c(BLACK) {}
    ChessPiece(const Variant v, const Color c) : v(v), c(c) {}

    bool is_empty() const;

    std::string to_string();
private:
    Variant v;
    Color c;

};



#endif //CHESSPIECE_H
