#include "main.ih"

int main(int argc, char **argv)
{
    if( structCall(int argc, char **argv) )
        return 0;
    boundCall(int argc, char **argv);
}