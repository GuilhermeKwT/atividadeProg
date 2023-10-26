#include <iostream>

using namespace std;

void invertString(string *palavra){
    string invert;
    int n = (*palavra).length();
    invert.clear();
    while (n >= 0){
        invert += (*palavra)[n];
        n--; 
    }
    *palavra = invert;
}

int main(){
    string palavra;
    cin >> palavra;
    invertString(&palavra);
    cout << palavra << endl;
}