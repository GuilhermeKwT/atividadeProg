#include <iostream>

using namespace std;

//antes da refatoração
double valDesconto(double val, double desconto, char metodoPagamento){
    double valComDesconto = val + (val * desconto) / 100;
    if (metodoPagamento == 'p'){
        valComDesconto += (valComDesconto * 5) / 100;
    }
    else if (metodoPagamento == 'b'){
        valComDesconto += (valComDesconto * 2) / 100;
    }
    return valComDesconto;
}

//depois da refatoração
double valDescontoRef(double val, double desconto, char metodoPagamento){
    double valComDesconto = val + (val * desconto) / 100;
    bool aPrazo = metodoPagamento == 'p';
    bool porBoleto = metodoPagamento == 'b';
    if (aPrazo){
        valComDesconto += (valComDesconto * 5) / 100;
    }
    else if (porBoleto){
        valComDesconto += (valComDesconto * 2) / 100;
    }
    return valComDesconto;
}

int main(){
    double val = 1000, desconto = 10;
    char metodoPagamento = 'p';

    cout << valDesconto(val, desconto, metodoPagamento) << endl;
    cout << valDescontoRef(val, desconto, metodoPagamento) << endl;

    return 0;
}