//Criar um programa que leia dados de um vetor de 12 elementos inteiros. Imprima o maior e menor sem ordenar,
// o percentual de números pares e a média dos elementos do vetor.
#include <iostream>
using namespace std;
int main() {
  int V[12], maior = -100000, menor = 100000, soma = 0, pares = 0;
  for (int i = 0; i < 12; i++) {
    cin >> V[i];
    soma += V[i];
  }
  for (int i = 0; i < 12; i++) {
    if (V[i] > maior) maior = V[i];
    if (V[i] < menor) menor = V[i];
    if (V[i] % 2 == 0) pares++;
  }
  cout << "maior = " << maior << endl;
  cout << "menor = " << menor << endl;
  cout << "percentual de num pares = " << (pares/12)*100 << endl;
  cout << "media = " << soma/12 << endl;
  return 0;
}