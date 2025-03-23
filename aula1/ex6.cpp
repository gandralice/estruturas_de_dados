//Escreva um programa que solicite ao usuário a idade de uma pessoa e informe se essa pessoa é criança (0 a 11 anos),
// adolescente (12 a 17 anos), adulta (18 a 49 anos) ou idosa (a partir de 50 anos).
#include <iostream>
using namespace std;
int main(){
  int idade;
  cout<<"Digite sua idade: ";
  cin>>idade;
  if(idade<0){
    cout<<"idade invalida"<<endl;
  }else if(idade>=50){
    cout<<"idosa"<<endl;
  }else if(idade>=18){
    cout<<"adulta"<<endl;
  }else if(idade>=12){
    cout<<"adolescente"<<endl;
  }else{
    cout<<"criança"<<endl;
  }
  return 0;
}