// ML: 0
#include <iostream>

using namespace std;

// ML: See annotations 2.5.1 this is not a proper variant of main
int main(const int _, const char **argv)
{	
        const size_t value = stoul(argv[1]);

        // ML: SLV
        // ML: NSC
        for (size_t i = 1, product = value; i != 11; ++i, product += value) 

                cout 	<< i
                        << " * "
                        << argv[1]
                        << " = "
                        << product
                        << '\n';
};
