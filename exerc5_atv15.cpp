#include <iostream>

using namespace std;

void busca_sequencial(int t, int *v, int n, int *i, int *j) {
    *i = 0;
    *j = n - 1;
    while (v[*i] + v[*j] != t){
        if (v[*i] + v[*j] > t){
            (*j)--;
        }
        else if(v[*i] + v[*j] < t){
            (*i)++;
        }
    }
}

int main(){
    int n, t, i, j;
    cin >> n >> t;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    busca_sequencial(t, v, n, &i, &j);
    cout << "O indice sao: " << i << " e " << j << endl;
    return 0;
}