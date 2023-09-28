#include main.ih

// I forgot that person should be capitalized :(((((((


int main()
{
    Person person;
    person.extract(cin);
    cout << person.name() << person.address() << person.phone() << person.mass() <<'\n';
}