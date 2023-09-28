#include "aux.ih"

// ML: NSC, a lot of the functions here do not need a lot of comments, but
// a few improves readability. Especially with this function.
bool any_contains(int const argc, char const *argv[], char const character)
{
    for (size_t index = 0; index != static_cast<size_t>(argc); ++index)
        if (string{argv[index]}.find(character) != string::npos)
            return true;
    
    return false;
};
