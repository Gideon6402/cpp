#include "parser.ih"

// found out whether current line has a number
// or not.
Parser::Return Parser::number(double *dest)
{
    // reference to current line:
    string const &line = d_line.line();

    // convert(dest, line);

    if (line.empty())
        return EOLN;

    // check whether line is contains a number
    for (C_iter iter = line.cbegin(); iter != line.cend(); ++iter)
    {
        if (isdigit(*iter))
            return NUMBER;
    }

    // if no number is found above:
    return NO_NUMBER; 
}