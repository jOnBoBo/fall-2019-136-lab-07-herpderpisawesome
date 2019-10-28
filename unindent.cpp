#include <iostream>



using std::cout;
using std::cin;
using std::endl;
using std::string;

string removeLeadingSpaces(string line){
    int x{};
    while(isspace(line[x])){
        x++;
    }
    return line.substr(x);
}




int main(){
    string line{};
    int y{};
  
    while(std::getline(cin,line)){
        cout << removeLeadingSpaces(line) << endl;
    }
   

    
return 0;
}