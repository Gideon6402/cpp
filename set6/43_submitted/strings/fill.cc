#include "strings.ih"

void Strings::fill(char *stringArray[])
{
    for (size_t index = 0; index != d_size; ++index)
        d_str[index] = stringArray[index];
}
