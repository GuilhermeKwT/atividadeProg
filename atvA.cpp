#include <iostream>

using namespace std;

//1
void ordernar(int *a, int *b){
    int aux;
    if (*a > *b){
        aux = *b;
        *b = *a;
        *a = aux;
    }
}

//2
double decomporDouble(double x, int *int_part){
    *int_part = (int) x;
    return (x - *int_part);
}

int main(){
    int a, b, int_part;
    double x;

    cin >> a >> b;
    ordernar(&a, &b);
    cout << a << "  " << b << endl;
    cin >> x;
    cout << decomporDouble(x, &int_part) << "  " << int_part << endl; 
    return 0;
}