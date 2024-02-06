#include <iostream>

using namespace std;

int busca_binaria(int x, int *v, int n){
    int ini = 0;
    int fim = n-1;
    while(ini <= fim){ 
        int i = (ini + fim) / 2;
        if (v[i-1] <= x && x <= v[i])
            return i;
        if (v[i] < x)
            ini = i+1;
        else
            fim = i; 
    }
    return -1;
}

int main(){
    int n, x;
    cin >> n >> x;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << "O indice eh: " << busca_binaria(x, v, n) << endl;
    return 0;
}