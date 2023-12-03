#include "strings.ih"

Strings::~Strings()
{
    for (; --d_size ;)
        delete d_ptrArray[d_size];
    operator delete(d_ptrArray);
}
