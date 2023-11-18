#include <iostream>
#include <cmath>
#include "primeNumber.h"
using namespace std;

int main(){
    unsigned long long limit = 600851475143;
    vector<unsigned long> primes = primeListUpTo((unsigned long)ceil(sqrt((double)limit)));
    auto i = primes.rbegin();

    for (; limit % (unsigned long long)*i != 0; i++)
    {
    }

    printf("%llu\n", *i);
    return 0;
}