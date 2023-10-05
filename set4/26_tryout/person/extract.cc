#include "person.ih"

// Store the 4 data in an array of strings.
// Start adding characters to next element
// in the array if the comma is reached
void Person::extract(std::istream &inputStream)   
{
    enum
    {
        NAME,
        ADDRESS,
        PHONE,
        MASS,
        END
    };
    // set up array of strings
    string inputValues[4];              // "default-constructs" all strings

    // extract data from input stream to inputValues
    for (size_t index = NAME; index++ != MASS;)   // if index is MASS 
        {
            // For first 3 input data should be split by comma
            // last one with \n
            string word;
            if (index = MASS)
                getline(cin, word, '\n'); 
            else
                getline(cin, word, ',');

            inputValues[index] = word;      
        }

    if (checkPhone(inputValues[PHONE]))
        initialize(inputValues);

}

// For our group: redundant space
