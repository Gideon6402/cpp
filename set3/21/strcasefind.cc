#include "main.ih"

size_t strcasefind(string const &str, string const &target, size_t const offset)
{
    size_t const len_str    = str.length();
    size_t const len_target = target.length();

    // use of [0] is consistent with str[index]
    // create a pointer such that target acts as NTBS
    // both strings will be cut of thus no \0 is no problem
    char const *targetPntr = &target[0];

    for (size_t index = offset;               
         index != len_str;                     // no point to check if, does run into unknow teritory
         ++index                               // target doesn't fit anymore
    )
    {
        char const *strPntr = &str[index];

        // str will be cut of to length of target and thus if their
        // lexicographical value is the same target is in str
        if (!strncasecmp(strPntr, targetPntr, len_target))  
        {
            size_t position = index + 1;        // countable starts at 1
            return position - offset;           // position from offset is wanted
                                            
        } 
            
    }
    return string::npos;
}