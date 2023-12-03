#ifndef INCLUDE_PIECE
#define INCLUDE_PIECE

#include <cstdint>

class Piece
{
    uint64_t d_location; // location of the square the piece is on
    char name;           // algebraic notation (see 'Naming of the pieces')
    int nth_piece;       // nth instance of this piece. E.g. 8 for the 8th pawn
};

#endif

// Naming of the pieces
    // King:   K
    // Queen:  Q
    // Bishop: B
    // Knight: N
    // Rook:   R
    // Pawn:   P