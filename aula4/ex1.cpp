// Desenvolva um programa que tenha dois métodos fahrenheit e celsius, onde você entra com um valor em fahrenheit e
// transforma em celsius e vice e versa.
// Fórmula Celsius: (fahrenheit – 32)*5/9; Fahrenheit=(Celsius *9/5)+32;

#include <iostream>
using namespace std;

double convertCe (double fa) {
    return (fa - 32) * 5 / 9;
}
double convertFa (double ce) {
    return (ce * 9 / 5) + 32;
}
int main() {
    int op;
    double num;
    cout << "converter para fahrenheit(1) ou celsius(2): ";
    cin >> op;
    if (op == 1) {
        cout << "entre com o valor em celsuis: ";
        cin >> num;
        cout << "fahrenheit:" << convertFa(num) << endl;
    }else if (op == 2) {
        cout << "entre com o valor em fahrenheit: ";
        cin >> num;
        cout << "celsius: " << convertCe(num) << endl;
    }else {
        cout << "erro";
    }
    return 0;
}