#include "person.ih"

// add data from input string to array of strings
string * Person::extract()   
{

    // Store the 4 data in an array of strings.
    // Start adding characters to next element
    // in the array if the comma is reached
    size_t dataMemberSpecifier = 0;
    string *inputValues;              // wouldn't string inputValues be more clear, what type whould inputValues then have?
                                        // All the string will be initialized with an empty string  

    while (true)                        // iterate over all the input lines
    {
        string Line;
        getline(cin, Line);                          // copy output line onto Line
        cout << "helloooo";
        add_characters(inputValues, Line, dataMemberSpecifier); //the 
        if (cin.fail())
            break;
    }

    return inputValues;                 
}