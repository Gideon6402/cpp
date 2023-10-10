#include "main.ih"

int main()
{
    // char **d_data;

    char a[] = "one";
    char b[] = "two";
    char *dummy[2]{a, b};

    size_t length = 2;
    char **original = dummy;
    char *copy[length]{nullptr};

    for (size_t idx = 0; idx != length; ++idx)
    {
        copy[idx] = ntbsCopy(original[idx]);
    }
    cout << copy[1] << '\n';
}

    // for (char ** pointer = original; pointer != original + length; ++pointer)
    // {
    //     ntbsCopy(*pointer);
    // }