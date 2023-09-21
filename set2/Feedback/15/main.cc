// ML: ?
#include <iostream>
#include <string>

using namespace std;

// ML: 8 spaces
int main()
{
        string line;
    
        for (getline(cin, line); !cin.eof(); getline(cin, line))
        {
                for (string::const_reverse_iterator iter = line.crbegin();
                iter != line.crend(); ++iter)
                {       
                        // ASCII charcters are of the form 0b0xxxxxxx
                        if ((*iter & 0b10000000) == 0)
                                // add characters to output as in ex. 11
                                cout << *iter;
                        
                        // Non-ASCII case
                        else    
                                // Of the form 0b10xxxxxx
                                if ((*iter & 0b01000000) == 0)

                                        // It is a following byte.
                                        continue;
                                
                                // Of the form 
                                else
                                        // It is the leading byte.

                                        cout << "print the Unicode character here";
                };
        cout << '\n'; 
        };
};
