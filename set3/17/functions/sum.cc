int sum(int argc, char *argv[])
{
    int sum = 0;                           // is this a local variable?
    for(int  i = 0; i != argc; ++i)
        sum += argv[i];                    // is this correct?
    return sum;
}
