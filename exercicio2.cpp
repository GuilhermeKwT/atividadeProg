#include <iostream>

using namespace std;

int main(){
    int v[4] = {1, 8, 9, 9}, *pV;
    
    for (int i = 0; i < 4; i++){
        pV = &v[i];
        cout << *pV << ' ';
    }
}