#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<unsigned long> primeListUpTo(unsigned long limit){
    vector<unsigned long> primes = {2};
    bool isPrime = false;
    for(unsigned long i = 3; i < limit; i += 2 ){
        //printf("\r %d", i);
        isPrime = true;
        for(unsigned long p : primes){
            if((double)p > ceil(sqrt(i))) break;
            if(i % p == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) primes.push_back(i);
    }
    //printf("\n");
    return primes;
}

vector<unsigned long> primeList(unsigned long limit){
    vector<unsigned long> primes = {2};
    bool isPrime = false;
    int i = 3;
    while(primes.size() < limit){
        //printf("\r %d", i);
        isPrime = true;
        for(unsigned long p : primes){
            if((double)p > ceil(sqrt(i))) break;
            if(i % p == 0){
                isPrime = false;
                break;
            }
            
        }
        if(isPrime) primes.push_back(i);
        i+=2;
    }
    //printf("\n");
    return primes;
}