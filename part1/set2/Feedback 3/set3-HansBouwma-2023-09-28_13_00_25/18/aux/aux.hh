#ifndef aux_hh
#define aux_hh

#include <string>
using namespace std;
// ML: BH, NEVER use a using namespace decleration in your heder file.
// Other people using your header file are now forced to have std scope.

struct ReturnValues
{
    bool ok;
    size_t nr;
    string value;
};

ReturnValues combine(int argc, char **argv);
bool structCall(int argc, char **argv);
void boundCall(int argc, char **argv);
void printArg(size_t nr, string value);

#endif
