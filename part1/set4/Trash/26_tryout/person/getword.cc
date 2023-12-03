#include "person.ih"

void Person::getword(istream &cin, string &word)
{
    getline(cin, word, ',');
}