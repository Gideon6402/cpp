#include "line.ih"

std::string Line::next()
{
    string substring;

    if (d_curPos != string::npos)
        create_substring(substring);       // RBA

    if (d_line.cbegin() + d_curPos == d_line.cend())
        d_curPos = string::npos;

    // cout << "pos: " << d_curPos << " string: " << substring << '\n';

    return substring;
}

// note that it would have been better if d_line was consructed const