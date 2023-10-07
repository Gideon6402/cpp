#include "person.ih"

void Person::setPhone(string phone)
{
    if (checkPhone(phone))
        d_phone = phone;
    else
        cout << "Phone can only contain digits\n";
}