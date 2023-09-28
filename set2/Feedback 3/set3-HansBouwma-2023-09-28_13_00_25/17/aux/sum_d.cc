#include "aux.ih"

double sum(int const argc, char const *argv[], double accumulator)
{
        // ML: Explicitly use size_t here. Not even sure auto would
        // deduce size_t here. A good use case for auto here would
        // be with iterators.
        for (auto index = 1; index != argc; ++index)
                accumulator += stod(argv[index]);

        return accumulator;
};
