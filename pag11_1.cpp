#include <iostream>

using namespace std;

int func(int n){
    int s = 0;
    for(int i = 0; i <= n; i++){
        s += i;
    }
    return s;
}

int main(){

    int n;
    cin >> n;
    cout << func(n) << endl;

    return 0;
}
