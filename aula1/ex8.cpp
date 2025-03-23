//Crie um programa que solicite ao usuário os três ângulos de um triângulo e informe se este é um triângulo equilátero,
// isósceles ou escaleno.
#include<iostream>
using namespace std;
int main() {
  double a,b,c;
  cout<<"Digite angulo a: "<<endl;
  cin>>a;
  cout<<"Digite angulo b: "<<endl;
  cin>>b;
  cout<<"Digite angulo c: "<<endl;
  cin>>c;
  if(a+b+c!=180){
    cout<<"invalido"<<endl;
  }else{
    if(a==b && b==c){
      cout<<"triangulo equilatero"<<endl;
    }else if(a!=b && b!=c && c!=a){
      cout<<"triangulo escaleno"<<endl;
    }else{
      cout<<"triangulo isosceles"<<endl;
    }
  }
  return 0;
}