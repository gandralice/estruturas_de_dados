//Um número primo é qualquer inteiro divisível por si próprio e por 1. Escreva um métod inteiro positivo e,
// se este número for primo retorne 1, caso contrário retorne 0.
#include <iostream>
using namespace std;

bool primo(int num){
  int c=0;
  for (int i=1; i<=num; i++){
    if(num%i==0){
      c++;
    }
  }
  if(c>2){
    return false;
  }else{
    return true;
  }
}

int main() {
  int num;
  cin>>num;
  if(primo(num)==true){
    cout<<"primo"<<endl;
  }else{
    cout<<"nao primo"<<endl;
  }
  return 0;
}