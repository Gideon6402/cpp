#include "line.ih"

// create the next substring
void Line::create_substring(string &substring)
{
    for (C_iter iter = d_line.cbegin() + d_curPos; iter != d_line.cend(); ++iter)
    {
        // update current position in line
        ++d_curPos;                

        // add characters to substring
        char const character = *iter;
        if (character != ' ')
        {
            substring += character;
        }

        // break if space is reached
        else
            break;
    }
}

// it would have been better if curPos was the actual iterator
// while loop would have been better because
// 1) the amount of iterations is not known
// 2) iter != d_line.cend is now written twice
// 3) infinite loop would probably not exist