#include "person.ih"

// Input stream automatically a reference, I don't need size of array right?
void Person::extractLine(istream &inputStream, string inputValues[], size_t &idx)
{
    string Line;
    getline(inputStream, Line);               // copy input line into Line 
    // add characterwise info to inputValues from line
    // starting at inputValues[idx] to acomandate multi
    // line input                                             
    add_characters(inputValues, Line, idx);  
}