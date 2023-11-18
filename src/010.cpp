#include <iostream>
#include <cinttypes>
#include "primeNumber.h"
using namespace std;


int main(){
    vector<unsigned long> l = primeListUpTo(2000000);
    uint64_t sum = 0;

    for(auto p : l){
        sum += p ;
    }
    printf("%" PRIu64 "\n",sum);
    return 0;
}