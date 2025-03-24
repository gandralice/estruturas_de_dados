//Criar uma matriz de ordem 5 e imprima: toda a matriz e depois os números que se encontram em posições
// cuja linha mais a coluna formam um número ímpar.
#include <iostream>
using namespace std;
int main() {
  int M[5][5], i, j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      cin >> M[i][j];
    }
  }
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      cout << M[i][j] << " ";
    }
    cout << endl;
  }
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if ((i+j) % 2 != 0) {
        cout << M[i][j] << " " <<endl;
      }
    }
  }
  return 0;
}