// ML: ?
#include <iostream>
#include <string>

using namespace std;

// ML: Use 4-space indenting, 8 is a bit much
int main()
{
        string line;
    
        for (getline(cin, line); !cin.eof(); getline(cin, line))
        {
                for (string::const_reverse_iterator iter = line.crbegin();
                iter != line.crend(); ++iter)                    // ML: PASCAL
                {
                        // add characters to output in reverse direction
                        cout << *iter;
                }
        cout << '\n';                                           // ML: Indent here
        };
};
