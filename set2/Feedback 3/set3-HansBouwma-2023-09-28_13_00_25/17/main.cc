// ML: 0
#include "main.ih"

// ML: I would use 4 spaces.
// This is not a valid form for main (see annotations)
// Use int main(int argc, char **argv) here.
int main(int const argc, char const **argv)
{       
        if (any_contains(argc, argv, '.'))
        {
                double accumulator = 0;
                double result = sum(argc, argv, accumulator);
                cout << result << '\n';
        }
        else
        {
                int accumulator = 0;
                int result = sum(argc, argv, accumulator);
                cout << result << '\n';
        };
};
