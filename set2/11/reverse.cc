#include <iostream>
#include <string>

using namespace std;

int main()
{
    do
    {
    string text;                       // contains input text
    getline(cin, text);                // copies redirected input to text

    for(string::const_reverse_iterator iter = text.crbegin();
        iter != text.crend(); ++iter)
        {
            // add characters to output in reverse direction
            cout << *iter;
        }

    cout << '\n'; 
    }
    // execute while lope while cin object has no eof flag
    while (!cin.eof() );
}