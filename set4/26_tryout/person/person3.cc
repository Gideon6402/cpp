#include "person.ih"

Person::Person(string inputValues[])
:   d_name    = inputValues[1],
    d_address = inputValues[2],
    d_phone   = inputValues[3],
    d_mass    = stoul(inputValues[4])
{}