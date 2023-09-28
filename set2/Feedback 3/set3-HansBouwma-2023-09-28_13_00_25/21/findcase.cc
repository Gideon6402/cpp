#include <iostream>
#include <string>
#include <cctype>

// ML: fix indenting and style.
size_t findcase(std::string const &str, std::string const &target, size_t offset=0)
{

for(; offset!= str.length(); ++offset)
{
    size_t counter=0, indtarget=1;

    if(str[offset]==std::toupper(target[0]) || str[offset]==std::tolower(target[0]))
    {
       counter=1;

       for(size_t indstr=offset+1; indstr!=offset+target.length(); ++indstr)
       {

          if(str[indstr]==std::toupper(target[indtarget]) || str[indstr]==std::tolower(target[indtarget]))

             counter++;

          indtarget++;
       }
     }

     if(counter==target.length())
        return offset;

}
     return std::string::npos;
}
