#include <iostream>

using namespace std;

//6
void estatica(){
    static int v = 10;
    v++;
    cout << v << endl;
}

//7
int valor = 222;
extern void outroArquivo();

//8
void registro(){
    register int k = 2;
    k++;
    cout << k << endl;
}

int main(){
    //1
    int n, *pn;
    pn = &n;
    pn++;
    pn--;

    //2
    const int v1 = 22;
    pn += v1;

    //3
    const int v2 = 31;
    pn -= v2;

    //4
    int m, *pm;
    pm = &m;
    int a = pn - pm;

    //5
    if (pn == pm){
        cout << pn << "    " << pm << endl;
    }  
    
    //6
    for (int i = 0; i < 5; i++){
        estatica();
    }

    //7
    outroArquivo();
    cout << valor << endl; 

    //8
    for (int i = 0; i < 3; i++){
        registro();
    }

    //9
    int vetor[4] = {2, 1, 0, 43}, *ponteiro;
    ponteiro = vetor;
    for (int i = 0; i < 4; i++){
        cout << *(ponteiro + i) << ' ';
    }
    cout << endl;

    //10
    if (pn == pm) {
        cout << "Os enderecos sao iguais" << endl;
    } 
    else if (pn < pm){
        cout << "A variavel m tem endereco maior" << endl;
    } 
    else {
        cout << "A variavel n tem endereco maior" << endl;
    }

    return 0;
}