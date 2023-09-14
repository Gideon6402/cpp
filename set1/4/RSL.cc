#include <iostream>

namespace
{
    //Define RSL
    char text[] =R"delimiter(^\s+Encryption key:(\w+)
^\s+Quality=(\d)+
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)delimiter";
}

int main()
{
    std::cout << text; //print the text on ouput stream
}