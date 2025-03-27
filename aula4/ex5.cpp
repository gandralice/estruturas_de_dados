//Gere um métod que trabalhe com fatorial, lembrando o fatorial é ele vezes a quantidade dele mesmo. Ex. fat 5 = 5*4*3*2*1.
#include <iostream>
using namespace std;

int fatorial(int n){
  int f=1;
   for(int i=n;i>=1;i--){
        f*=i;
   }
   return f;
}

int main(){
    int num;
    cin>>num;
    cout<< "fatorial de "<< num << ": " <<fatorial(num);
    return 0;
}