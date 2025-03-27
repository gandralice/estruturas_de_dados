//Calcule a soma dos quadrados de dois números fornecidos pelo usuário. Trabalhe com chamada
// de métodos usadas como argumento de outros métodos.

#include <iostream>
using namespace std;

int soma(int a, int b){
  return a+b;
}
int quad(int c){
  return c*c;
}
int quadSoma(int d, int e){
  return soma(quad(d), quad(e));
}

int main(){
  int n1, n2;
  cin >> n1 >> n2;
  cout << "A soma dos quadrados: "<<quadSoma(n1, n2);
  return 0;
}
