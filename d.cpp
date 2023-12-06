#include <iostream>
#include <iomanip>

using namespace std;

void leitura(double *v, int n){
    cout << "Digite as notas dos alunos: ";
    for (int i = 0; i < n; i++){
        cin >> *(v + i);
    }
}

void imprimirMedia(double *v, int n){
    double media = 0;
    for (int i = 0; i < n; i++){
        media += *(v + i);
    }
    media /= n;
    cout << fixed << setprecision(2) << "A media entre todos os alunos foi: " << media;
}

int main(){
    int n;
    cout << "Digite o numero de alunos: ";
    cin >> n;
    double *v;
    if (!(v = new(nothrow) double[n])){
        cout << "Falha de alocacao de memoria" << endl;
    }
    leitura(v, n);
    imprimirMedia(v, n);
    delete[] v;
    v = NULL;
}