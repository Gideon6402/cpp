#include "strings.ih"

Strings::Strings(int argc, char *argv[])
:
    d_size(argc),
    d_strPtr(new string *[argc])
{
    fill(argv);
}
