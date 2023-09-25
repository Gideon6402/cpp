#ifndef aux_hh
#define aux_hh

#include <string>

struct ReturnValues
{
    bool ok;
    std::size_t nr;
    std::string value;
};

ReturnValues combine(int argc, char **argv);
bool structCall(int argc, char **argv);
void boundCall(int argc, char **argv);
void print(std::size_t nr, std::string value);

#endif
