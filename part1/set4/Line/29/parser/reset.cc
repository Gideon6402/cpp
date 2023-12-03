#include "parser.ih"

bool Parser::reset()
{
    // The getline member function of the Line object
    // re-initializes all its member functions with
    // the input stream. It resets d_line.
    return d_line.getLine();                  // basically a constructor
}