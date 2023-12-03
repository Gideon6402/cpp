#include "person.ih"

// Store the 4 data in an array of strings.
// Start adding characters to next element
// in the array if the comma is reached
void Person::extract(std::istream &inputStream)   
{
    // set up array of strings
    size_t dataMemberSpecifier = 0;
    string inputValues[SIZE];              // "default-constructs" all strings

    // extract data from input stream to inputValues
    while (true)
    {
        if (dataMemberSpecifier >= MASS)  // don't extract another line if inputValues is full
            break;

        string line;
        getline(inputStream, line);               // copy input line into line 
        getInputValues(inputValues, line, dataMemberSpecifier);
    }

    initialize(inputValues);
}

