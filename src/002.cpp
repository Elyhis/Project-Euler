#include<iostream>
using namespace std;

int main(){
    int limit = 4000000;

    int fibonacci = 2;
    int sumEven = 0;
    int u1 = 1;
    int u2 = 2;

    while(fibonacci < limit){
        if(fibonacci % 2 == 0){
            sumEven += fibonacci;
        }
        fibonacci = u1 + u2;
        u1 = u2;
        u2 = fibonacci;
    }

    printf("%d\n", sumEven);
    return 0;
}