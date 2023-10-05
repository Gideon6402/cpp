#include "person.ih"

void Person::setPhone(string phone)
{
    // bool ok = true;
    // for( auto iter = phone.cbegin();
    //      iter != phone.cend();
    //      ++iter
    // )          
    // {
    //     check if number, assume no white spaces
    //     cout << *iter << '\n';
    //     if (!(*iter).isdigit())
    //         ok = false;
    // }

    // if (ok)
    //     d_phone = phone;
    // else
    //     cout << "Invalid phone";
    d_phone = phone;
}