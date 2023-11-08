#include <iostream>
#include <ctime>
#define N 5

using namespace std;

//1
int maiorVal(int v[], int n){
    int maior = 0;
    for (int i = 0; i < n; i++){
        if (v[i] > maior){
            maior = v[i];
        }
    }
    return maior;
}

//2
double mediaValores(int *v, int n){
    double media = 0;
    for (int i = 0; i < n; i++){
        media += v[i];
    }
    media /= n;
    return media;
}

//3
int numPositivos(int v[], int n){
    int  num = 0;
    for (int i = 0; i < n; i++){
        if (v[n] >= 0){
            num++;
        }
    }
    return num;
}

//4
void preencherVetor(int *v, int n){
    for (int i = 0; i < n; i++){
        v[i] = (rand() % 100);
    }
}

//5
void maioreMenor(int v[N], int n, int *maior, int *menor){
    *maior = INT16_MIN;
    *menor = INT16_MAX;
    for (int i = 0; i < n; i++){
        if (v[i] > *maior){
            *maior = v[i];
        }
        else if (v[i] < *menor){
            *menor = v[i];
        }
    }
}

int main(){
    srand(time(NULL));
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << "O maior eh: " << maiorVal(v, n) << endl
    << "A media dos valores eh: " << mediaValores(v, n) << endl
    << "O numero de inteiros eh: " << numPositivos(v, n) << endl;
    int v2[N], maior, menor;
    preencherVetor(v2, N);
    maioreMenor(v2, N, &maior, &menor);
    cout << "O maior valor eh: " << maior << "  E o menor eh: " << menor << endl;
    
    return 0;
}
