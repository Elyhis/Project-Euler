#include <iostream>
#include <cmath>
#include "primeNumber.h"
using namespace std;

int sum(int n){
    return (n*(n+1))/2;
}

int sumPow(int n){
    return (n*(n+1)*(2*n+1))/6;
}

const int MAX_NUMBER = 100;
int main(){
    printf("%d", (int)pow(sum(MAX_NUMBER),2) - sumPow(MAX_NUMBER));
    return 0;
}

