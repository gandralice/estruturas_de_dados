//Criar uma classe matemática que contenham dois atributos da classe A, B inteiros e os seguintes
//métodos:Entrada de dados;soma,multiplicação, subtração e divisão(fazer o tratamento da divisão,
//não dividir por zero

#include <iostream>
using namespace std;

class matematica{
public:
    int a,b;
    void entrada(){
        cout<<"Entre com dois num inteiros: ";
        cin>>a>>b;
    }
    double soma(){
        return a+b;
    }
    double multi(){
        return a*b;
    }
    double sub(){
        return a-b;
    }
    double divi(){
        if (b==0){
            return 0;
        }else{
            return a/b;
        }
    }
};
int main()
{
    matematica obj;
    obj.entrada();
    cout<<obj.divi();

    return 0;
}