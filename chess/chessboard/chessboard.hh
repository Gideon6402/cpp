#ifndef INCLUDE_CHESSBOARD_
#define INCLUDE_CHESSBOARD_

#include "../piece/piece.hh"

class ChessBoard
{
    Piece *d_pieces;

    public:
        ChessBoard();
    
    private:   
        static Piece *create_pieces_ptr();
};

#endif
