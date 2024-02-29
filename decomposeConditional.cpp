#include <iostream>

using namespace std;

string temperatura(int temperature){
    string result;
    if (temperature > 100) {
        result = "Muito quente!";
    } else if (temperature > 70) {
        result = "Clima agradável.";
    } else if (temperature > 50) {
        result = "Fresco.";
    } else {
        result = "Muito frio!";
    }
    return result;
}

int main(){
    int temp;
    cin >> temp;
    cout << temperatura(temp) << endl;

    return 0;
}