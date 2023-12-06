#include <iostream>
#include <iomanip>

using namespace std;

struct aluno {
    string nome;
    int serie;
    double nota;
};

void leitura(aluno *v, int n){
    for (int i = 0; i < n; i++){
        cout << "Digite o nome do aluno: ";
        cin >> (v + i)->nome;
        cout << "Digite a serie do aluno: ";
        cin >> (v + i)->serie;
        cout << "Digite a nota do aluno: ";
        cin >> (v + i)->nota;
        cout << endl;
    }
}

void imprimirMedia(aluno *v, int n){
    double media = 0;
    for (int i = 0; i < n; i++){
        media += (v + i)->nota;
    }
    media /= n;
    cout << fixed << setprecision(2) << "A media entre todos os alunos foi: " << media;
}

int main(){
    int n;
    cout << "Digite o numero de alunos: ";
    cin >> n;
    aluno *v;
    if (!(v = new(nothrow) aluno[n])){
        cout << "Falha de alocacao de memoria" << endl;
    }
    leitura(v, n);
    imprimirMedia(v, n);
    delete[] v;
    v = NULL;
}