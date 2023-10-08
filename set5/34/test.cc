#include "main.ih"

int main()
{
    // char **d_data;

    char a[] = "one";
    char b[] = "two";
    char *dummy[2]{a, b};

    char **original = dummy;

    cout << original[0][1];

    // for (char *char_pntr; )  
}