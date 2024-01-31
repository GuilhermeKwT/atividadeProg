#include <iostream>

using namespace std;

double potencia(double b, int n){
    if (n <= 0){
        return 1;
    }
    return b * potencia(b, n - 1);
}

int main(){
    int n; 
    double b;
    cin >> b >> n;
    cout << potencia(b, n) << endl;

    return 0;
}