#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char *argv[]){
    cout << removeLeadingSpaces("       int x = 5") <<endl;
return 0;
}