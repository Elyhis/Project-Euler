#include <iostream>
#include <cmath>
#include "primeNumber.h"
using namespace std;

const int MAX_NUMBER = 20;

int main(){
    vector<unsigned long> l= primeList(MAX_NUMBER);

    unsigned long product = 1;

    for(unsigned long n : l){   
        product *= pow(n,(unsigned long)floor(log(MAX_NUMBER)/log(n)));
    }
    cout << product << endl;
    return 0;
}