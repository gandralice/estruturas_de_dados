//Crie um programa que solicite ao usuário os lados de um triângulo e informe a sua área.
#include <iostream>
using namespace std;
#include <cmath>
int main(){
  double a,b,c;
  cout<<"Digite lado a: ";
  cin>>a;
  cout<<"Digite lado b: ";
  cin>>b;
  cout<<"Digite lado c: ";
  cin>>c;
  if(a<0 && b<0 && c<0){
    cout<<"nao ha triangulo"<<endl;
  }else{
    double p = (a+b+c)/2;
    double area = sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"area do triangulo: "<<area<<endl;
  }
  return 0;
}