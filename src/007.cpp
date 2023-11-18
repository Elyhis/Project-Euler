#include <iostream>
#include <cmath>
#include "primeNumber.h"


const int MAX_PRIME = 10001;
int main(){
    cout << primeList(MAX_PRIME)[MAX_PRIME-1] << endl;
    return 0;
}