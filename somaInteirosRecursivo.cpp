#include <iostream>

using namespace std;

int somaInt(int n){
    if (n <= 1){
        return 1;
    }
    return n + somaInt(n - 1);
}

int main(){

    int n;
    cin >> n;
    cout << somaInt(n) << endl;

    return 0;
}