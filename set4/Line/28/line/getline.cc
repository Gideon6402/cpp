#include "line.ih"

bool Line::getLine()
{
    // initialize data members
    string line;
    getline(cin, line);
    d_line = line;
    d_curPos = 0;

    // determine whether is has non whitespace characters
    if (has_non_ws(d_line))
        return true;
    else
        return false;
}

// It would have been better if this was a contructor.