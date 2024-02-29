#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double valInicial, taxa, tempo;
    valInicial = 1000.0;
    taxa = 0.05;
    tempo = 2.0;
    double montante = valInicial * pow(1 + taxa, tempo);
    cout << "O montante é: " << montante << endl;

    return 0;
}