//Desenvolver um programa onde você entre via teclado com dois valores e após a digitação o usuário escolha um
// seletor de opção (menu) com as seguintes opções:
//- Multiplicação; - Adição; - Divisão; - Subtração; - Fim do processo;
//Obs. Criar um métod para cada opção e dentro do case chamar as funções respectivamente.

#include <iostream>
using namespace std;
double mult (double num1, double num2){
  return num1*num2;
}
double adic (double num1, double num2){
  return num1 + num2;
}
double divi (double num1, double num2){
  return num1/num2;
}
double subt (double num1, double num2){
  return num1 - num2;
}

int main(){
  char op;
  double n1, n2;
  cout<<"Escolha uma operacao: (*,+,/,- ou . fim do processo)";
  cin>>op;
  if(op=='.'){
    cout<<"fim do processo";
  }else{
    cout << "Entre com dois numeros:";
    cin>>n1>>n2;
    switch(op){
      case '*':
        cout <<"Resultado: " << mult(n1, n2);
      break;
      case '+':
        cout <<"Resultado: " << adic(n1, n2);
      break;
      case '/':
        cout <<"Resultado: " << divi(n1, n2);
      break;
      case '-':
        cout <<"Resultado: " << subt(n1, n2);
      break;
      default:
        cout <<"Operacao Invalida";
      break;
    }
  }
  return 0;
}