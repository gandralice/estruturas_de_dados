//Ler um vetor V de 10 elementos e obter um vetor W cujos componentes são os fatoriais dos respectivos componentes de V.
#include <iostream>
using namespace std;

int fatorial(int n) {
  int resultado = 1;
  for (int i = 1; i <= n; i++) {
    resultado *= i;
  }
  return resultado;
}

int main() {
  int V[10], W[10], fat=0, i;
  for (i = 0; i < 10; i++) {
    cin >> V[i];
  }
  for (i = 0; i < 10; i++) {
    W[i] = fatorial(V[i]);
  }
  cout<< "vetor W: "<< endl;
  for (i = 0; i < 10; i++) {
    cout << W[i] << " ";
  }
  return 0;
}