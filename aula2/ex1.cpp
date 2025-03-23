//Fazer um programa que leia vários números inteiros e positivos. A leitura se encerra
// quando encontrar um número negativo ou quando o vetor ficar completo. Sabe-se que o vetor
// possui, no máximo, 10 elementos. Gerar e imprimir um vetor onde cada elemento é o inverso(negativo) do
// correspondente do vetor original.
#include <iostream>
using namespace std;
int main(){
    int vetor[10], n, x= 0, i;
    for(i = 0; i < 10; i++){
      cin >> n;
      if(n>=0){
        vetor[x] = n;
        x++;
      }
      else{
        break;
      }
    }
    for(i = 0; i<x; i++){
      cout << vetor[i]*(-1) << endl;
    }
    return 0;
}