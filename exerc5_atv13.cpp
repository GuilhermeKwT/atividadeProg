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

void selection (int *v, int n){
    int i, j, maior;
    for (i = 0; i < n-1; i++){
        maior = i;
        for (j = i+1; j < n; j++){
            if (v[j] > v[maior])
                maior = j;
        }
        if (v[maior] != v[i])
            troca (&v[maior], &v[i]);
    }
}

int main(){
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    while (verifica(v, n))
        selection(v, n);
    for (int i = 0; i < n; i++){
        cout << v[i] << ' ';
    }
    cout << endl;
    
    
}