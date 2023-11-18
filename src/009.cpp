#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;

    for(int p = 2; p < 200;p++){
        for(int q= 1; q < p;q++){
            a = p*p - q*q;
            b = 2*p*q;
            c = p*p + q*q;
            if(a + b + c == 1000){
                cout << "Le triplet est : (" <<  a << ',' << b << ',' << c << ')' << endl;
                cout << "Son produit : " <<  a* b* c << endl;
                return 0;
            }
        }
    }
    return 0;
}