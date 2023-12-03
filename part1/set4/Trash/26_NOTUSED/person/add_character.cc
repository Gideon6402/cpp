#include "person.ih"

// although return inputValues by referenence it doesn't need an & because it already a pointer
void Person::add_characters(string *inputValues, string &Line, size_t &dataMemberSpecifier)  // do I also have to pass cin here?
{
    for (auto iter = Line.cbegin();
            iter != Line.cend();
            ++iter
    )
    {
        if (*iter == ',')
            ++dataMemberSpecifier;
        else
            inputValues[dataMemberSpecifier] += *iter;      
    } 
}