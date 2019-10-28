#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"
#include <fstream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line{};
    string w{};
    string g{};

        std::ifstream fin("badcode.cpp");
    if(fin.fail()){
    std::cerr<<"File cannot be opened for reading." << endl;
    exit(1);
    }
    while (getline(fin, line))
    {
        w += rmindent(line);
        g += indent(line);
    }
    cout << " //remove indent" << endl << w << " //adding indentation" << endl << g;

    return 0;
}