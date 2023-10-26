#include <iostream>

using namespace std;

//1
int multipPorVal(int num1, int num2){
    return num1 * num2;
}

//2
int multipPorRef(int *num1, int *num2){
    return (*num1) * (*num2);
}

//3
int somaDezPorVal(int n){
    return n + 10;
}

//4
void somaDezPorRef(int *n){
    n +=10;
}

//5
int subCincoPorVal(int n){
    return n - 5;
}

//6
void subCincoPorRef(int *n){
    *n -= 5;
}

//7
void inverterVet(int *v, int tamanhoVet){
    int inv[tamanhoVet], p = tamanhoVet - 1;
    for (int i = 0; i < tamanhoVet; i++){
        inv[p] = *(v + i);
        p--;
    }
    for (int i = 0; i < tamanhoVet; i++){
        *(v + i) = inv[i];
    }
}

//8
void tornarMaiusc(string *palavra){
    for (int i = 0; i < (*palavra).length(); i++){
        if ((*palavra)[i] < 123 && (*palavra)[i] > 96){
            (*palavra)[i] -= 32;
        }
    }
}

int main(){
    int num1 = 5, num2 = 2;
    cout << multipPorVal(num1, num2) << endl
        << multipPorRef(&num1, &num2) << endl
        << somaDezPorVal(num1) << endl;
    somaDezPorRef(&num1);
    cout << num1 << endl
        << subCincoPorVal(num1) << endl;
    subCincoPorRef(&num1);
    cout << num1 << endl;
    int v[5] = {1, 2, 3, 4, 5};
    inverterVet(&v[0], 5);
    for (int i = 0; i < 5; i++){
        cout << v[i] << ' ';
    }
    string texto = "Breno";
    tornarMaiusc(&texto);
    cout << endl << texto << endl;

    return 0;
}