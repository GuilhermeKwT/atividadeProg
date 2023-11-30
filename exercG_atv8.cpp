#include <iostream>

using namespace std;

//1
void maioreMenor(int v[], int n, int *maior, int *menor){
    *menor =  INT16_MAX;
    *maior = INT16_MIN;
    for (register int i = 0; i < n; i++){
        if (v[i] < *menor)
            *menor = v[i];
        else if (v[i] > *maior)
            *maior = v[i];
    }
}

//2
void unirVetores(int a[], int na, int b[], int nb, int *ab){
    int countA = 0, countB = 0, i = 0;
    while (countA < na && countB < nb){
        ab[i] = a[countA];
        countA++;
        i++;
        ab[i] = b[countB];
        countB++;
        i++;
    }
    if (countA < na){
        while (countA < na){
            ab[i] = a[countA];
            countA++;
            i++;
        }
    } 
    else {
        while (countA < nb){
            ab[i] = b[countB];
            countB++;
            i++;
        }
    }
}

//3
void separarVetor(int v[], int n, int *pares, int *impares, int *countA, int *countB){
    
    for (int i = 0; i < n; i++){
        if ((v[i] % 2) == 0){
            pares[*countA] = v[i];
            (*countA)++;
        }
        else {
            impares[*countB] = v[i];
            (*countB)++;
        }
    }
}

int main(){
    //1
    int v[5] = {10, 6, 2, 7, 9}, maior, menor;
    maioreMenor(v, 5, &maior, &menor);
    cout << "O maior valor eh: " << maior << " e o menor eh: " << menor << endl;

    //2
    int a[3] = {2, 8, 7}, b[2] = {1, 0}, ab[5];
    unirVetores(a, 3, b, 2, ab);
    cout << "O vetor resultante foi: ";
    for (int i = 0; i < 5; i++){
        cout << ab[i] << ' ';
    }
    cout << endl;

    //3
    int pares[5] = {0}, impares[5] = {0}, countPares = 0, countImpares = 0;
    separarVetor(v, 5, pares, impares, &countPares, &countImpares);
    cout << "O vetor de pares ficou: ";
    for (int i = 0; i < countPares; i++){
        cout << pares[i] << ' ';
    }
    cout << endl << "E o de impares ficou: ";
    for (int i = 0; i < countImpares; i++){
        cout << impares[i] << ' ';
    }
    cout << endl;

    return 0;
}