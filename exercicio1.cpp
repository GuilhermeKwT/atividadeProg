#include <iostream>

using namespace std;

int main(){
    int a, b, *pA, *pB;
    cin >> a >> b;
    pA = &a;
    pB = &b;
    *pA = *pA + *pB;
    *pB = *pA - *pB;
    *pA = *pA - *pB;
    cout << a << "  " << b << endl;
}