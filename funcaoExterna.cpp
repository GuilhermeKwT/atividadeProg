#include <iostream>

using namespace std;

extern int valor;

void outroArquivo(){
    valor += 2;
    cout << valor << endl;
}