#include <iostream>
#include <vector>
using namespace std;

vector<unsigned long> primeList(unsigned long limit){
    vector<unsigned long> primes = {2};
    bool isPrime = false;
    for(unsigned long i = 3; i < limit; i += 2 ){
        isPrime = true;
        for(unsigned long p : primes){
            if(i % p == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) primes.push_back(i);
    }
    return primes;
}
