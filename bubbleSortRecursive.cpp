#include <iostream>

using namespace std;

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux; 
}

bool verifica (int *v, int n){
    int i = 0;
    while ((v[i] <= v[i+1]) && (i < n-1)){
        i++;
    }
    if (i < n-1)
        return false;
    else
        return true;
}

void bubbleRecursiva(int *v, int n){
    if(n == 0){
        return;
    }
    bubbleRecursiva(v, n - 1);
    if (v[n - 1] > v[n])
        troca (&v[n - 1], &v[n]);
}

int main(){
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    while(!(verifica(v,n)))
        bubbleRecursiva(v, n);
    for (int i = 0; i < n; i++){
        cout << v[i] << ' ';
    }
    cout << endl;
    return 0;
}