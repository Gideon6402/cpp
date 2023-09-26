// ML: 0
// ML no summary -> ?
// Write a program that reads the line of redericted input in reverse order.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    
    for (getline(cin, line); !cin.eof(); getline(cin, line))    // ML: DRY See annotations 6.5.4
    {
        for (string::const_reverse_iterator iter = line.crbegin();
             iter != line.crend(); ++iter)
            
            // add characters to output in reverse direction
            cout << *iter;

        cout << '\n'; 
    };
};
