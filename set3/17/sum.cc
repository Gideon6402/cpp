int sum(int argc, int *argv[])
{
    int sum = 0;                           // is this a local variable?
    for(i = 0; i != argc, ++i)
        sum += argv[i];                    // is this correct?
    return sum;
}
