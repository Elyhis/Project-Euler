#include <iostream>
#include <cmath>
#include <String>
using namespace std;

bool isPalindrome(int n){
    string test = to_string(n);
    bool isPal = true;

    //cout << test.size() << endl;

    for(int i = 0; i <= test.size()/2 - 1; i++){
        if(test[i] != test[test.size()- 1 -i]) {   
            isPal = false;

        }
    }
    return isPal;
}

int main(){
    int u1 = 999,u2 = 999;
    int palindrome = 0;

    for(u1 = 110; u1 < 1000; u1 +=11){
        for(u2 = 100000 / u1; u2 < 1000; u2++){
            if(isPalindrome(u1*u2)){
                if(u1*u2 > palindrome) palindrome = u1*u2;
            }
        }
    }
    cout << palindrome << endl;
    return 0;
}