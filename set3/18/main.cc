#include "main.ih"

int main(int argc, char **argv)
{
    if( structCall(argc, argv) )
        return 0;
    boundCall(argc, argv);
}