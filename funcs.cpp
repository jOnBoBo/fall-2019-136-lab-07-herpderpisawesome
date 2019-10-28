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

string rmindent(string line){
    string newline{};

    
        newline+=removeLeadingSpaces(line) + "\n";
    
    return newline;
}

int countChar(string line, char c){
    int x{};
    for(int i=0; i<line.length(); i++){
        if(line[i]==c){
            x++;
        }
    }
    return x;
}

string indent(string line){
 string line1{};
static int y{};
  string newline{};
 
        y-=countChar(line,'}');
          for(int x=0; x<y; x++){
        newline+="\t";
    }
        y+=countChar(line,'{');
  
        newline += line +"\n" ;
    
    return newline;
}