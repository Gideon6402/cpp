#include "main.ih"

int main()
{
    Person person;
    person.extract();
    cout << person.name()
         << person.address()
         << person.phone() 
         << person.mass() 
         <<'\n';
 }