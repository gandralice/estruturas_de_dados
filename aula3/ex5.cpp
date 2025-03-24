//Ler os elementos de uma matriz de ordem 6 e imprima o produto dos elementos que estão abaixo da diagonal principal.
#include <iostream>
using namespace std;
int main(){
  int M[6][6], i, j, produto=1;
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      cin >> M[i][j];
      if(i>j) produto*=M[i][j];
    }
  }
  cout << produto << endl;
  return 0;
}