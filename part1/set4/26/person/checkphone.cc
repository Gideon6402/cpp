#include "person.ih"
#include <cctype>

bool Person::checkPhone(string &phone)
{
    bool ok = true;
    // check whether phone exists of only numbers
    for (string::const_iterator iter = phone.cbegin();
         iter != phone.cend();
         ++iter
    )
    {
        char ch = *iter;
        if (!isdigit(ch))
            ok = false;
    }
    return ok;
}