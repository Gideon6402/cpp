#include "strings.ih"

Strings::~Strings()
{
    for (; --d_size ;)
        delete d_ptrArray[d_size - 1];
    delete d_ptrArray;
}


// We don't have to remove all the strings in d_str because
// delete[] takes care of that. 