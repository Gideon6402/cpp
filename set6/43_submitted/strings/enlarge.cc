#include "strings.ih"

void Strings::enlarge()
{
    string **newArray = rawPointer(d_capacity * 2);    // double the capicity
    d_capacity *= 2;

    for (size_t idx = 0; idx != d_size; ++idx)    // copy existing strings
    {
        newArray[idx] = d_ptrArray[idx];
        // delete d_ptrArray[idx];
        // *d_ptrArray[idx].~string;   // Why can't I do this?
    }

    delete d_ptrArray;
    d_ptrArray = newArray;
}


    // string *newArray = new string[d_size + 1];       // room for an extra string

    // for (size_t idx = 0; idx != d_size; ++idx)  // copy existing strings
    //     newArray[idx] = d_str[idx];

    // return newArray;
