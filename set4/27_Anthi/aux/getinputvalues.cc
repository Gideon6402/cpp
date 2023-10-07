#include "aux.ih"

// fill <inputValues> with data by extracting information from <line>.
void getInputValues(string inputValues[], string &line)
{
    size_t dataMemberSpecifier = 0;
    // fill inputValues by extracting data from <line>
    for (Const_iter iter = line.cbegin(); iter != line.cend(); ++iter)  // fix auto
    {
        if (*iter == ',')
        {
            ++dataMemberSpecifier;
            ++iter;                    // skip whitespace after comma
        }
        else if (dataMemberSpecifier < Enum::N_INPUT)               // make enum
            inputValues[dataMemberSpecifier] += *iter; 
        else 
            break;
    } 
}