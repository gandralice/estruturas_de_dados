//Escreva um programa que solicite ao usuário quatro números e mostre na tela o maior,
// o menor e a média aritmética dos números digitados.
#include<iostream>
using namespace std;
int main(){
  double n1, n2, n3, n4;
  cin>>n1>>n2>>n3>>n4;
  double maior= n1, menor= n1;
  if(n2>maior)maior= n2;
  if(n3>maior)maior= n3;
  if(n4>maior)maior= n4;
  if(n2<menor)menor= n2;
  if(n3<menor)menor= n3;
  if(n4<menor)menor= n4;
  cout<<"Maior= "<< maior <<" .Menor= "<< menor <<" .Media= "<< (n1+n2+n3+n4)/4 <<endl;
  return 0;
}