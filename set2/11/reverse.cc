#include <iostream>
#include <typeinfo>
#include <string>

int main()
{
    using namespace std;
    string Input;

    do
    {
    string line;
    getline(cin, line);
    Input += line += '\n';
    }
    while (!cin.eof() );
        
    cout << Input << '\n';
}