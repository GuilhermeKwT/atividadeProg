#include <iostream>

using namespace std;

int main(){
    int v[4] = {1, 8, 9, 9}, *pV;
    pV = &v[0];
    
    for (int i = 0; i < 4; i++){
        cout << *(pV + i) << ' ';
    }
}
