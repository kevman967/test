#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int line;
    string first;
    string last;
    string age;
    ifstream ins;
    ins.open("text.txt");
    if (!ins){
        cout << "file could not be opened";
    }
    ins >> line;
    for(line;line<0;line--){
        ins >> first >> last >> age;
        cout << first << " "<< last<< " "<< age;
    }
    ins.close();

    

}