#include <iostream>
#include <typeinfo>
#include <string>

int main()
{
    using namespace std;
    string Input;

    do
    {
    string word;
    getline(cin, word);
    Input += word;
    }
    while (!cin.eof() );
        
    cout << Input << '\n';
}