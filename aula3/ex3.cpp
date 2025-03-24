// Criar uma matriz 2x3. Gerar e imprimir a transposta dessa matriz.
// A matriz transposta é gerada trocando linha por coluna.
#include <iostream>
using namespace std;
int main() {
  double M[2][3], T[3][2];
  int i, j;
  for (i = 0; i < 2; i++) {
     for (j = 0; j < 3; j++) {
       cin >> M[i][j];
     }
  }
  for (i = 0; i < 2; i++) {
     for (j = 0; j < 3; j++) {
       T[j][i] = M[i][j];
     }
  }
  cout << "transposta: "<< endl;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      cout << T[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}