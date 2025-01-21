/* date = January 21, 2025 3:51 PM */

#include "ChessBoard.h"

ChessBoard::ChessBoard() {
    this->pieces[0][0] = ChessPiece(ChessPiece::ROOK, ChessPiece::BLACK);
    this->pieces[0][1] = ChessPiece(ChessPiece::KNIGHT, ChessPiece::BLACK);
    this->pieces[0][2] = ChessPiece(ChessPiece::BISHOP, ChessPiece::BLACK);
    this->pieces[0][3] = ChessPiece(ChessPiece::QUEEN, ChessPiece::BLACK);
    this->pieces[0][4] = ChessPiece(ChessPiece::KING, ChessPiece::BLACK);
    this->pieces[0][5] = ChessPiece(ChessPiece::BISHOP, ChessPiece::BLACK);
    this->pieces[0][6] = ChessPiece(ChessPiece::KNIGHT, ChessPiece::BLACK);
    this->pieces[0][7] = ChessPiece(ChessPiece::ROOK, ChessPiece::BLACK);

    for (auto &p : this->pieces[1]) {
        p = ChessPiece(ChessPiece::PAWN, ChessPiece::BLACK);
    }

    for (auto &p : this->pieces[6]) {
        p = ChessPiece(ChessPiece::PAWN, ChessPiece::WHITE);
    }

    this->pieces[7][0] = ChessPiece(ChessPiece::ROOK, ChessPiece::WHITE);
    this->pieces[7][1] = ChessPiece(ChessPiece::KNIGHT, ChessPiece::WHITE);
    this->pieces[7][2] = ChessPiece(ChessPiece::BISHOP, ChessPiece::WHITE);
    this->pieces[7][3] = ChessPiece(ChessPiece::QUEEN, ChessPiece::WHITE);
    this->pieces[7][4] = ChessPiece(ChessPiece::KING, ChessPiece::WHITE);
    this->pieces[7][5] = ChessPiece(ChessPiece::BISHOP, ChessPiece::WHITE);
    this->pieces[7][6] = ChessPiece(ChessPiece::KNIGHT, ChessPiece::WHITE);
    this->pieces[7][7] = ChessPiece(ChessPiece::ROOK, ChessPiece::WHITE);
}

std::string ChessBoard::toFEN() {
    std::string out = "";
    for (auto row : this->pieces) {
        int num_empty = 0;
        for (auto piece : row) {
            if (piece.is_empty()) {
                num_empty++;
            } else {
                if (num_empty)
                    out += std::to_string(num_empty);
                out += piece.to_string();
                num_empty = 0;
            }
        }
        if (num_empty) {
            out += std::to_string(num_empty);
        }
        out += "/";
    }
    return out;
}

ChessPiece &ChessBoard::getPiece(const std::string &location) {
    // location is of this form:
    // {letter column}{number row}
    // char is a lowercase letter
    char col = location[0];
    int row = std::stoi(&location[1]);

    int col_num = static_cast<int>(col) - static_cast<int>('a');
    int row_num = 8 - row;

    return pieces[col_num][row_num];
}
