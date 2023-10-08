#include "line.ih"

bool Line::has_non_ws(string const &line)
{
    bool ok = false;

    // iterate over all characters
    // true if non white space character
    for(C_iter iter = line.cbegin(); iter != line.cend(); ++iter)
    {
        char const character = *iter;
        if (!isspace(character))
            ok = true;
    }

    return ok;
}