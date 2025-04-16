#include <iostream>
using namespace std;

void multiplos_tres(int n1, int n2) {
    if (n2>n1) {
        for (int i=n1; i<=n2; i++) {
            if (i%3==0) {
                cout<<i<<" ";
            }
        }
    }else {
        for (int i=n2; i<=n1; i++) {
            if (i%3==0) {
                cout<<i<<" ";
            }
        }
    }
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<< "multiplos de tres no intervalo:"<<endl;
    multiplos_tres(a,b);
    return 0;
}