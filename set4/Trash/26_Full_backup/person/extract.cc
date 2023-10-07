#include "person.ih"

// Store the 4 data in an array of strings.
// Start adding characters to next element
// in the array if the comma is reached
void Person::extract(std::istream &inputStream)   
{
    // set up array of strings
    size_t dataMemberSpecifier = 0;
    string inputValues[4];              // "default-constructs" all strings

    // extract data from input stream to inputValues
    while (true)
    {
        extractLine(inputStream, inputValues, dataMemberSpecifier);
        if (inputStream.fail())
            break; 
    }

    initialize(inputValues);

}

// For our group: maybe make inputValues a private data member?
