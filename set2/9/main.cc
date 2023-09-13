# include <iostream>
# include <string>
# include <stdio.h>


int main()
{
    using namespace std;

    int ival2;
    cout << "Enter number to make table: ";
    cin >> ival2;
    string line;
    for(int ival1 = 1; ival1 != 11; ++ival1)
    {
        string sval1 = to_string(ival1);

        string sval2 = to_string(ival2);

        int iproduct = ival1 * ival2;
        string sproduct = to_string(iproduct);

        line += sval1;
        line += " * ";
        line += sval2;
        line += " = ";
        line += sproduct;


        cout << line << '\n';
        line.clear();
    }
}
