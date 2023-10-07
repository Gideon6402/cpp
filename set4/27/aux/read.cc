 #include "aux.ih"

 void read(Person personArray[])        // no rererence needed right?
{
    for(size_t idx = 0; idx != Enum::N_PERSONS; ++idx)
    {
        cout << "?\n";
        string line;
        getline(cin, line);

        string inputValues[Enum::N_INPUT];

        getInputValues(inputValues, line);

        // initialize personArray[idx] with input values
        personArray[idx].initialize(inputValues);
        cout << '\n'; 
    }
}

// I really tried to use function from 26 but maybe I should have made new
// ones because it gets quite illogical and messy. Because this time I do want to
// stop reading at a new line not at EOF.
// If input is incorrect it will cause segmentation fault
// Would have been better to construct with input values but that requires
// memory allocation.