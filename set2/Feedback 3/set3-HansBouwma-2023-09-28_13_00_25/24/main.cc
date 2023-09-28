// ML: 1
#include <string>
#include <iostream>

using namespace std;

void fun(string str)
{
    size_t sum = 0;
    for (size_t idx = 0; idx < str.length(); ++idx)
        sum += str[idx];
}

void fun2(string const &str)
{
    size_t sum = 0;
    for (size_t idx = 0; idx < str.length(); ++idx)
        sum += str[idx];
}

void callValue(string const &prog)
{
    for (size_t idx = 0; idx < 10000000; ++idx)
        fun(prog);
}

void callRef(string const &prog)
{
    for (size_t idx = 0; idx < 10000000; ++idx)
        fun2(prog);
}

int main(int argc, char *argv[])
{
    callValue(argv[0]);
    callRef(argv[0]);
}




