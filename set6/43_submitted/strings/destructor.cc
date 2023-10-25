#include "strings.ih"

Strings::~Strings()
{
    delete[] d_str;
}


// We don't have to remove all the strings in d_str because
// delete[] takes care of that. 