#include "strings.ih"

void Strings::add(string const &next)
{
    // check if enlarge (unchecked)
    if (d_size == d_capacity)
        enlarge();
    
    // add pointer
    string *nextPtr = new string{ next };
    new (d_ptrArray + d_size) string *{ nextPtr };  // place new ptr at the end
    ++d_size;
}

    // string *tmp = enlarge();            // make room for the next string,
    //                                     // tmp is the new string *

    // tmp[d_size] = next;                 // store next

    // delete[] d_str;                     // return old memory

    // d_str = tmp;                        // update d_str and d_size
    // ++d_size;
