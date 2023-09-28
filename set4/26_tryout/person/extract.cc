#include "person.ih"

// add data from input string to array of strings
string * Person::extract(std::istream cin)   
{
    // Store the 4 data in an array of strings.
    // Start adding characters to next element
    // in the array if the comma is reached
    int dataMemberSpecifier = 0
    string inputValues[4];              // will this work?
                                        // All the string will be initialized with an empty string  

    while (true)                        // iterate over all the input lines
    {
        string Line;
        getline(cin, Line)                          // copy output line onto Line
        add_characters(inputValues, Line, dataMemberSpecifier) //the 
        if (cin.fail())
            break;
    }

    bool 

    return inputValues                  // Can I leave out Person:: here?
}

&ref = value