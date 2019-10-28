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
while(getline(cin,line)){
    
    cout << indent(line);
}

    
return 0;
}