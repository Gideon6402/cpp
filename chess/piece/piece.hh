#ifndef INCLUDE_PIECE
#define INCLUDE_PIECE

#include <cstdint>
#include <cstddef>

class Piece
{
    uint64_t d_location; // location of the square the piece is on
    char d_name;           // algebraic notation (see 'Naming of the pieces')
    size_t nth_piece;       // nth instance of this piece. E.g. 8 for the 8th pawn

    public:
        Piece() = default;
        Piece(uint64_t location, char name, size_t nth_piece);
    
    private:
        uint64_t algebraic_to_uint64(char letter, char number);
};

#endif

// Naming of the pieces
    // King:   K
    // Queen:  Q
    // Bishop: B
    // Knight: N
    // Rook:   R
    // Pawn:   P