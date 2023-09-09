#include <iostream>

namespace
{
    char code[] =
R"delimiter(^\s+Encryption key:(\w+)
^\s+Quality=(\d)+
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)delimiter";
}

int main()
{
    std::cout << code;
}