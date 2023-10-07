#include "parser.ih"

Parser::Return Parser::convert(double *dest, string const &str)
try
{   
    return pureDouble   (dest, str) ? NUMBER : NO_NUMBER;        // these enums can be accesed here?
}   
catch (...) 
{   
    return NO_NUMBER;   
}   