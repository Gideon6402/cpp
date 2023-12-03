#include "main.ih"

int main(int argc, char **argv)
{
    Line line;
    if (line.getLine())
        // cout << "has non white\n"
        ;

    string substring;
    for (int i = 0; i != 10; ++i)
    {
        substring = line.next();
        cout << substring << '\n';
    }
}
