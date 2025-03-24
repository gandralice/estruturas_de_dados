//Criar uma matriz de ordem 4 e exibir a soma da diagonal principal.
#include <iostream>
using namespace std;
int main() {
    double M[4][4], soma=0;
    int i, j;

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            cin >> M[i][j];
        }
    }
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            if (i==j) {
                soma += M[i][j];
            }
        }
    }
    cout << soma << endl;
    return 0;
}