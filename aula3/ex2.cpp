//Ler valores inteiros para a matriz A[3][5]. Gerar e imprimir o vetor Soma_Linha, onde cada elemento é a soma
// dos elementos de uma linha da matriz A.
#include <iostream>
using namespace std;
int main() {
  int A[3][5],soma_linha[3] = {0}, i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      cin >> A[i][j];
    }
  }
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 5; j++) {
      soma_linha[i] += A[i][j];
    }
  }
  for (i = 0; i < 3; i++) {
    cout <<"Linha "<< i <<" "<< soma_linha[i] << endl;
  }
}