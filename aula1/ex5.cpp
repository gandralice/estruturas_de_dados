//Escreva um programa que solicite ao usuário um valor inteiro e informe se esse número é par ou ímpar.
#include <iostream>
using namespace std;
int main(){
  int num;
  cout<< "Digite um numero inteiro: ";
  cin >> num;
  if(num % 2==0){
    cout<<"O numero e par"<<endl;
  }else{
    cout<<"O numero e impar"<<endl;
  }
  return 0;
}