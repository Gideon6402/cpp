#include "chessboard.ih"

// static
Piece *ChessBoard::create_pieces_ptr()
{
    return new Piece[32];
}
