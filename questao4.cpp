#include <iostream>

using namespace std;

//antes da refatoração
double areaCirculo(double radius){
    double area = 3.14159 * radius * radius;
    return area;
}

//depois da refatoração
double areaCirculoRef(double radius){
    double pi = 3.14159;
    double area = pi * radius * radius;
    return area;
}

int main(){
    double raio = 2;
    cout << areaCirculo(raio) << endl;
    cout << areaCirculoRef(raio) << endl;

    return 0;
}