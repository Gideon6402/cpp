#include "main.ih"

void count_lines()
{
    int n_lines = 0;
    string line;
    while (true)
    {
        // ML: Be consistent with spacing inside ()
        if ( getline(cin, line) )
            n_lines += 1;
        if (cin.fail())
            break;
    }

    cout << n_lines;

}
