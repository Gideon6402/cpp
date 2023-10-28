#include "strings.ih"

void Strings::add(string const &next)
{
    // check if enlarge (unchecked)
    if (d_size == d_capacity)
        enlarge();
    
    // add pointer
    // string *nextPtr = new string{ next };
    // new (d_ptrArray + d_size) string *{ nextPtr };  // place new ptr at the end
    d_ptrArray[d_size] = new string{ next };
    ++d_size;
}