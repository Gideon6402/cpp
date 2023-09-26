// ML: ?
// ML no summary -> ? (ALSO do not include the commands.sh file)
// Write a program that simulates the monty hall problem

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    size_t numsimulations = stoul(argv[1]);
	
    bool contains_r = false;
    bool contains_v = false;
   
    // If a second argument was given, we will check if it contains 'r' or 'v'.
    if (argc >= 3)
    {    
        // Assign the second argument to a specific string for clarity.
        string optional = argv[2];        

        contains_r = (optional.find('r') != string::npos);
        contains_v = (optional.find('v') != string::npos);
    };

    if (contains_r)
        // Initialize srand with time(0) if r is specified.
        srand(time(0));
    else
        // Initialize it with 0 of not specified.
        srand(0);
   
    size_t numhits = 0;
        
    // Each iteration is 1 performance of the game.
    for (size_t index = 0; index != numsimulations; ++index) 
    {
        // A random number modulo 3 so that we get
        // a random number between 0 and 2 inclusive.
        size_t prizedoor = rand() % 3;        
        size_t chosendoor = rand() % 3;

        // We dont initialize here as we have to make sure that it is 
        // neither the prize door nor the chosen door.
        size_t openeddoor;

        // Assign opened door with value until
        // it is not equal to any of the other doors.
        do
        {
            openeddoor = rand() % 3;
        }
        while (openeddoor == chosendoor or openeddoor == prizedoor);

        // Define and initialize the suggested door, by substracting
        // opened door and chosen door we make sure that it is
        // the number of the door that is left.
        size_t suggesteddoor = 3 - openeddoor - chosendoor;
        
        // Count how many times the door that was suggested and
        // in the end also chosen was the door with the prize behind.
        if (suggesteddoor == prizedoor)
            ++numhits;

        // If 'v' was part of the third argument
        // we need to print this for each game performance.
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
    
    // If 'v' was not part of the third argument
    // we just print this after all games have been performed.
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
