#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string removeLeadingSpaces(string line){
    string newString{""};
    bool isSpace = true;
    int i{0};
    char c{};
    while(isSpace){
        c= line[i];
        
        if(isspace(c)){
            newString=line.substr(i+1,line.length());
            i++;
        }
        else break;
        
        
        
    }
    return newString;
}
