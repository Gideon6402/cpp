#include "main.ih"

size_t strcasefind(string const &str, string const &target, size_t const offset)
{
    cout << "hello";
    size_t const len_str    = str.length();
    size_t const len_target = target.length();

    // use of [0] is consistent with str[index]
    // create a pointer such that target acts as NTBS
    // both strings will be cut of thus no \0 is no problem
    char const *targetPntr = &target[0];

    for (size_t index = offset;
         index != len_str - len_target;    // no point to check if
         ++index                           // target doesn't fit anymore
    )
    {
        char const *strPntr = &str[index];

        // str will be cut of to length of target and thus if their
        // lexicographical value is the same target is in str
        if ( strncasecmp(strPntr, targetPntr, len_target) )  
        {
            cout << "hello"
            return index - offset;         // position from offset is wanted
        } 
            
    }
    return string::npos;
}