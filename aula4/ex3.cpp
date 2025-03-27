//Escreva um métod que receba o ano e retorne 1 se for bissexto e 0 se não for. Um ano é bissexto quando divisível
// por 4, mas não por 100. Um ano também é bissexto quando divisível por 400.
#include<iostream>
using namespace std;

int vBissexto(int ano){
  if((ano%4==0 && ano%100!=0) || (ano%400==0)){
    return 1;
  }else{
    return 0;
  }
}

int main(){
  int ano;
  cout<<"Informe o ano desejado: ";
  cin>>ano;
  cout<<vBissexto(ano);
  return 0;
}