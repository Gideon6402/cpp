// ML: 0
// ML no summary -> ?
// Write a program that reverses all lines. Make the program compatible 
// for UTF-8 characters.
#include <iostream>
#include <string>

using namespace std;

int main()
{   
    // Non-ASCII bytes are stored in utill the whole character can be printed.    
    string non_ascii_buffer = "";    // ML: SF. String constructor already initializes to empty string.

    string line;
    // We iterate over all lines in the input stream.
    for (getline(cin, line); !cin.eof(); getline(cin, line))    // ML: DRY (getline)
    {
        // We iterate backwards over the bytes in the line.
        for (string::const_reverse_iterator iter = line.crbegin();
             iter != line.crend(); ++iter)
        {       
            // ASCII charcters are of the form 0b0xxxxxxx
            if ((*iter & 0b10000000) == 0)

                // add characters to output as in ex. 11
                cout << *iter;
            
            // Non-ASCII cases
            else
            {
                // Prepend the non-ASCII byte to the beginning of the buffer.
                non_ascii_buffer.insert(0, 1, *iter);

                // First byte of a non-ASCII sequence is of a form 0b11xxxxxx.
                if ((*iter & 0b01000000) != 0)
                {
                    // When we have all bytes making up a character, we print.
                    cout << non_ascii_buffer;
                    non_ascii_buffer = "";
                }
             }
        };
        cout << '\n'; 
    };
};
