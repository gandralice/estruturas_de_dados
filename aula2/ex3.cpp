//Criar um programa que crie um vetor com 10 posições e carregue com uma palavra, depois imprima
// o vetor de uma maneira que exiba a palavra ao contrário (ex. casa...asac)
#include <iostream>
using namespace std;
int main(){
  char v[10];
  int i;
  for(i=0;i<10;i++){
    cin>>v[i];
  }
  for(i=9;i>=0;i--){
    cout<<v[i]<<" ";
  }
  return 0;
}
