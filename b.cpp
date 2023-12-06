#include <iostream>

using namespace std;

void preencherVetor(int *v,int n){
    for (int i = 0; i < n; i++){
        *(v + i) = i;
    }
}

void escreverVetor(int *v, int n){
    for (int i = 0; i < n; i++){
        cout << *(v + i) << ' ';
    }
    cout << endl;
}

int main(){
    int n, *v;
    cin >> n;
    if (!(v = new(nothrow) int[n])){
        cout << "Falha de alocacao de memoria" << endl;
    }
    preencherVetor(v, n);
    escreverVetor(v, n);
    delete[] v;
    v = NULL;
}