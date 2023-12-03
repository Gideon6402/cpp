#include "strings.ih"

Strings::~Strings()
{
    for (size_t index = 0; index != d_size; ++index)
    {
        d_str[index].~string();
    }

    delete[] d_str;
}  