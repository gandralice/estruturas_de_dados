// Fazer um programa que digite vários números no vetor de tamanho máximo de 100 elementos, até digitar
// o número “0”. Imprimir quantos números iguais ao último número foram lidos. O limite de números é 100.
// Sem considerar o “0” como último número.
#include <iostream>
using namespace std;
int main() {
  double vet[100], x;
  int y=0, c=0;
  for (int i = 0; i < 100; i++) {
    cin>> x;
    if(x!=0){
      vet[i] = x;
      y++;
    }else{
      break;
    }
  }
  double ultimo= vet[y-1];
  for (int i = 0; i < y; i++) {
    if(vet[i]==ultimo){
      c++;
    }
  }
  return 0;
}
