#include <iostream>

using namespace std;

void dobrarValor(int *pA){
    *pA *= 2;
}

int main(){
    int a;
    cin >> a;
    dobrarValor(&a);
    cout << a << endl;
}