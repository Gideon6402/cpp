// main.hh or main.ih ?


#include "main.hh"                

int main(int argc, char *argv[])
{
    using namespace std;
    int sumValue = sum(argc, argv);
    print(sumValue);
}
