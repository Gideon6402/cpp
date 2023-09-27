#include "main.ih"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        cout << "arg1: str to inspect, arg2: target, "
                "optionally arg3: starting offset\n";
        return 0;
    }

    size_t offset = strcasefind(argv[1], argv[2], 
                                argc < 4 ? 0 : stoul(argv[3]));

    cout << "strcasefind: `" << argv[2] << "' ";
    if (offset == string::npos)
        cout << "not found\n";
    else
        cout << "found at offset " << offset << '\n';
}