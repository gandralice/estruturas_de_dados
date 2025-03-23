//Crie um programa que solicite ao usuário os três coeficientes de uma equação do segundo grau e informe os valores de x’ e x’’.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,b,c;
    cout << "valor de a: ";
    cin >> a;
    cout << "valor de b: ";
    cin >> b;
    cout << "valor de c: ";
    cin >> c;
    double delta = pow(b,2)-4*a*c;
    if(delta<0) {
        cout << "nao existem raizes reais."<<endl;
    }else {
        double x1 = (-b+sqrt(delta))/(2*a);
        double x2 = (-b-sqrt(delta))/(2*a);
        cout << "x' = " << x1 << endl;
        cout << "x'' = " << x2 << endl;
    }
    return 0;
}