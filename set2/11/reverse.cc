#include <iostream>
#include <typeinfo>
#include <string>

int main()
{
    using namespace std;
    string Input;
    string reverseLine;

    do
    {
    string line;
    getline(cin, line);

    for(string::const_reverse_iterator iter = line.crbegin();
            iter != line.crend(); ++iter)
                {
                    reverseLine += *iter;
                }

    reverseLine += '\n';
    }
    while (!cin.eof() );

    cout << reverseLine << '\n';
}