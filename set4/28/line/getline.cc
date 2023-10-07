#include "line.ih"

bool Line::getLine()
{
    // extract line
    // define d_line
    string line;
    getline(cin, line);
    d_line = line;

    // determine whether is has non whitespace characters
    if (has_non_ws(d_line))
        return true;
    else
        return false;
}