#include "piece.ih"

// static
uint64_t Piece::algebraic_to_uint64(char letter, char number)
{
    char nth_square = 8*(letter - 'a') + number;
    return 1 << nth_square;
}

