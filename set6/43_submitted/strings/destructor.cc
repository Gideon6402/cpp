#include "strings.ih"

Strings::~Strings()
{
    for (; --d_size ;)
        delete d_ptrArray[d_size - 1];
    delete d_ptrArray;
}
