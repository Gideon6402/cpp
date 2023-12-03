#include "main.ih"

char original[] = "hello world";
char *ntbsCopy(char *orignal)
{
    char *copy = new char[100];         // could be better with placement new
    while (true)
    {
        *(copy++) = *(original++);
    }
    return copy;
}