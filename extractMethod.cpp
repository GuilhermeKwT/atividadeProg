#include <iostream>

using namespace std;

//Antes da refatoração
void medias(double *v, int n){
    double media, soma = 0;
    for(int i = 0; i < n; i++){
        soma += v[i];
    }
    media = soma / n;
    cout << "A media eh: " << media;
    if (media >= 7){
        cout << endl << "Aprovado" << endl;
    }
    else if(media >= 5){
        cout << endl << "DP" << endl;
    }
    else {
        cout << endl << "Reprovado" << endl;
    }
}

//Depois da refatoração
double medias_ref(double *v, int n){
    double soma = 0;
    for(int i = 0; i < n; i++){
        soma += v[i];
    }
    return soma / n;
}

void aprovacao(double media){
    if (media >= 7){
        cout << endl << "Aprovado" << endl;
    }
    else if(media >= 5){
        cout << endl << "DP" << endl;
    }
    else {
        cout << endl << "Reprovado" << endl;
    }
}


int main(){
    int n;
    cin >> n;
    double v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    //antes da refatoração
    medias(v, n);

    //depois da refatoração
    double media;
    media = medias_ref(v, n);
    cout << "A media eh: " << media << endl;
    aprovacao(media);

    return 0;
}