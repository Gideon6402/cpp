// how should I read int main(int argc, char* argv[]) ?
// why include string, we shouldn't use string yet right?

int main(int argc, char *argv[])
{
    cout << "hello" <<
            (argc == 0) ? "world"   :
            (argc == 1) ? "argv[1]" :
            argv[stoul(argv[1])]
                    << '\n'         ;
}