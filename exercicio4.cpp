#include <iostream>

using namespace std;

void contarVogal(int *numVogais, string palavra){
    for (int i = 0; i < palavra.length(); i++){
        switch(palavra[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                *numVogais += 1;
        }
    }
}

int main(){
    int vogais = 0;
    string palavra;
    cin >> palavra;
    contarVogal(&vogais, palavra);
    cout << vogais << endl;
}