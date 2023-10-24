#include <iostream>

using namespace std;

int main(){
    float numero1 = 7.3, numero2, *fP;
    fP = &numero1;
    cout << *fP << endl;
    numero2 = *fP;
    cout << numero2 << endl
        << &numero1 << endl
        << fP << endl;
    return 0;
}