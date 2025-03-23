//Crie um programa que solicite ao usuário os lados de um retângulo e informe a sua área.
#include <iostream>
using namespace std;
#include <cmath>

int main(){
  double a, l;
  cout << "Digite a Altura: ";
  cin >> a;
  cout << "Digite a Largura: ";
  cin >> l;
  if(a>0 && l>0){
    cout<< "Área do retangulo: "<< a*l;
  }else{
    cout<< "nao ha retangulo";
  }
  return 0;
}