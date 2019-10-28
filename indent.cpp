#include <iostream>


using std::cout;
using std::cin;
using std::endl;
using std::string;


int countChar(string line, char c){
    int x{};
    for(int i=0; i<line.length(); i++){
        if(line[i]==c){
            x++;
        }
    }
    return x;
}


int main(){
    string line{};
    int y{};
  
    while(std::getline(cin,line)){
        y-=countChar(line,'}');
          for(int x=0; x<y; x++){
        cout << "\t";
    }
        y+=countChar(line,'{');
  
        cout  << line << endl ;
    }

    
return 0;
}