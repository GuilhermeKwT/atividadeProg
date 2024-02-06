#include <iostream>

using namespace std;

int busca_sequencial(int x, int *v, int n) {
    for (int j = 0; j < n; j++)
        if (v[j] < x && v[j + 1] >= x)
            return j;
    return -1;
}

int main(){
    int n, x;
    cin >> n >> x;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << "O indice eh: " << busca_sequencial(x, v, n) << endl;
    return 0;
}