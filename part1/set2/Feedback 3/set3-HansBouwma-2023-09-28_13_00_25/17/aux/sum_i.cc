#include "aux.ih"

int sum(int const argc, char const *argv[], int accumulator)
{
        for (auto index = 1; index != argc; ++index)
                accumulator += stoi(argv[index]);

        return accumulator;
};
