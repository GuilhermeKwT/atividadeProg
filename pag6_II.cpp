#include <iostream>

using namespace std;

int somaItensVetor(int *v, int n){
    if (n == 1){
        return v[0];
    }
    return v[n - 1] + somaItensVetor(v, n - 1);
}

int main(){

    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << somaItensVetor(v, n) << endl;

    return 0;
}