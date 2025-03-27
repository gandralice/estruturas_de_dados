//Calcule a soma dos quadrados de dois números fornecidos pelo usuário. Trabalhe com chamada
// de métodos usadas como argumento de outros métodos.

#include <iostream>
using namespace std;

int quad1(int x){
  return x*x;
}
int quad2(int y){
  return y*y;
}
int quadSoma(int a, int b){
  return quad1(a)+quad2(b);
}

int main(){
  int n1, n2;
  cin >> n1 >> n2;
  cout << "A soma dos quadrados: "<<quadSoma(n1, n2);
  return 0;
}