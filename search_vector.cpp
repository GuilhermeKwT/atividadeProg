#include <iostream>

using namespace std;

int busca_sequencial(int x, int *v, int n) {
    if (v[n] == x){
        return n;
    }
    int j = busca_sequencial(x, v, n - 1);
    if (v[j] == x){
        return j; 
    }
    return -1;
}

int main(){
    int n, x;
    cout << "Tamanho do vetor: ";
    cin >> n;
    cout << "Valor a ser procurado: ";
    cin >> x;
    int v[n];
    cout << "Digite os valores do vetor: " << endl;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << "O indice eh: " << busca_sequencial(x, v, n) << endl;
    return 0;
}