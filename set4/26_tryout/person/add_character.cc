#include "person.ih"

// although return inputValues by referenence it doesn't need an & because it already a pointer
void Person::add_characters(string *inputValues, string &Line, size_t &dataMemberSpecifier) 
{
    for (auto iter = Line.cbegin();
            iter != Line.cend();
            ++iter
    )
    {
        if (*iter == ',')
        {
            ++dataMemberSpecifier;
            ++iter;                    // skip whitespace after comma
        }
        else                     
            inputValues[dataMemberSpecifier] += *iter;
    } 
} 