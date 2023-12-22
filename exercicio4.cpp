#include <iostream>

using namespace std;

int busca(int *V, int n, int valorProcurado) {
    for (int i = 0; i < n; ++i) {
        if (V[i] == valorProcurado) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, n = 10, valorProcurado = 7;
    int resultado = busca(v, n, valorProcurado);
    if (resultado != -1) {
        cout << "O elemento foi encontrado no indice: " << resultado << endl;
    } else {
        cout << "O elemento nao foi encontrado" << endl;
    }

    return 0;
}
