#include <iostream>
#include <string>
#include <cstring>

// ML: fix indenting and style (such as BABO).
size_t findcase(std::string const &str, std::string const &target, size_t offset=0)
{

for(; offset!= str.length(); ++offset)
{
    std::string compare;
    for(size_t start=0; start!=target.length(); ++start)
        compare+=str[offset+start];

    int result = strncasecmp(compare.c_str(), target.c_str(), target.length());

    if(result==0)
       return offset;
}
return std::string::npos;
}
