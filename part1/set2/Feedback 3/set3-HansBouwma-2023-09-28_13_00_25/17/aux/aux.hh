#ifndef d_aux_hh_9023845
#define d_aux_hh_9023845

// ML: I would put a comment describing which source file contains which overloaded function
// ML: SF, is const necessary for an int and char argument here?
// ML: Note for order.txt order should be same as declaration in header file.
bool any_contains(int const argc, char const *argv[], char const character);
double sum(int const argc, char const *argv[], double accumulator);
int sum(int const argc, char const *argv[], int accumulator);

#endif
