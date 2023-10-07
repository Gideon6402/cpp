#include "main.ih"

int main()
{
    Person person;
    person.extract(cin);
    cout << person.name()    << '\n'
         << person.address() << '\n'
         << person.phone()   << '\n'
         << person.mass()    << '\n';
 }
