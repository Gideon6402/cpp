#include "parser.ih"

string Parser::next()
{
    return d_line.next();
}

// return types were a value is passed don't need a const right?