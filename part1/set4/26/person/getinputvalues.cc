#include "person.ih"

// fill <inputValues> with data by extracting information from <line>.
void Person::getInputValues(string *inputValues, string &line, size_t &dataMemberSpecifier) 
{
    for (Const_iter iter = line.cbegin(); iter != line.cend(); ++iter)  // fix auto
    {
        if (*iter == ',')
        {
            ++dataMemberSpecifier;
            ++iter;                    // skip whitespace after comma
        }
        else if (dataMemberSpecifier < SIZE)               // make enum
            inputValues[dataMemberSpecifier] += *iter; 
        else 
            break;
    } 
} 