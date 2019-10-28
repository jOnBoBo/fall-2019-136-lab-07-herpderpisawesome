#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;



int main(){
string line{};
string w{};
string g{};
while(getline(cin,line)){
    w+=rmindent(line);
    g+=indent(line);
}
cout << w << endl << g;






    
return 0;
}