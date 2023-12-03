// ML: 0
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

// ML: See comment about spaces also
//     NSC, CANON, SLV

using namespace std;

int main(int argc, char *argv[])
{
        size_t numsimulations = stoul(argv[1]);
        
        bool contains_r = false;
        bool contains_v = false;
        
        if (argc >= 3)
        {
                string optional = argv[2];
                contains_r = (optional.find('r') != string::npos);
                contains_v = (optional.find('v') != string::npos);
        };

        if (contains_r)
                srand(time(0));
        else
                srand(0);
        
        size_t numhits = 0;
        for (size_t i = 0; i < numsimulations; ++i)
        {
                size_t prizedoor = rand() % 3;
                size_t chosendoor = rand() % 3;
                size_t openeddoor;
                
                do {
                        openeddoor = rand() % 3;
                }
                while (openeddoor == chosendoor or openeddoor == prizedoor);

                size_t suggesteddoor = 3 - openeddoor - chosendoor;

                if (suggesteddoor == prizedoor)
                        ++numhits;
                if (contains_v)
                        cout << "selected: "
                             << chosendoor
                             << ", price behind: "
                             << prizedoor
                             << ", opened: "
                             << openeddoor
                             << ", suggested: "
                             << suggesteddoor
                             << '\n';
        };
        if (not contains_v)
                cout << "# of iterations: "
                     << numsimulations
                     << ", # of hits: "
                     << numhits
                     << ", hit percentage: "
                     << 100 * numhits / numsimulations
                     << "%"
                     << '\n';
};
