// ML: ?
// Add a few comments and this would be a 1.
#include "main.ih"

int main(int argc, char **argv)
{
    if (argc == 2)
        cout <<    fib(stoul(argv[1])) << '\n';
    else
        cout << rawfib(stoul(argv[1])) << '\n';
};
