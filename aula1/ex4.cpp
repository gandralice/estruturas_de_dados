//Crie um programa que solicite ao usuário os lados de um trapézio e informe a sua área.
#include<iostream>
using namespace std;
int main() {
    double a,b,h;
    cout<<"\n Digite a: "<<endl;
    cin>>a;
    cout<<"\n Digite b: "<<endl;
    cin>>b;
    cout<<"\n Digite h: "<<endl;
    cin>>h;
    if (a>0 && b>0 && h>0) {
        double area = (a+b)*h/2;
        cout<<"area: "<<area<<endl;
    }else {
        cout<<"nao ha trapezio"<<endl;
    }
    return 0;
}