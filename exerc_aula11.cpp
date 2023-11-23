#include <iostream>

using namespace std;

struct Aluno{
    string nome;
    int idade;
    float nota;
};

struct Curso{
    Aluno estudante;
};

int main(){
    //1
    Aluno aluno;
    aluno.nome = "Matheus";
    aluno.idade = 17;
    aluno.nota = 9.2;
    cout << "Nome: " << aluno.nome << "  Idade: " << aluno.idade << "  Nota: " << aluno.nota << endl;

    //2
    Aluno alunos[3];
    alunos[0].nome = "Jean";
    alunos[0].idade = 18;
    alunos[0].nota = 8.6;
    alunos[1].nome = "Guilherme";
    alunos[1].idade = 18;
    alunos[1].nota = 8.8;
    alunos[2].nome = "Giovana";
    alunos[2].idade = 18;
    alunos[2].nota = 8.5;
    for (int i = 0; i < 3; i++){
        cout << endl << "Nome: " << alunos[i].nome << "  Idade: " << alunos[i].idade << "  Nota: " << alunos[i].nota << endl;
    }

    //3
    Aluno *pAluno;
    pAluno = &aluno;
    pAluno->nome = "Eduardo";
    pAluno->idade = 19;
    pAluno->nota = 7.6;
    cout << endl << "Nome: " << aluno.nome << "  Idade: " << aluno.idade << "  Nota: " << aluno.nota << endl;

    //4
    Curso computacao;
    computacao.estudante.nome = aluno.nome;
    computacao.estudante.idade = aluno.idade;
    computacao.estudante.nota = aluno.nota;
    cout << endl << "Nome: " << computacao.estudante.nome << "  Idade: " <<  computacao.estudante.idade << "  Nota: " <<  computacao.estudante.nota << endl;
}