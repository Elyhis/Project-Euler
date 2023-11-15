#include<iostream>
using namespace std;

int nbElem(int bound, int elm){
    return (int)((bound - 1)/elm);
}

int sum(int bound, int elm){
    return nbElem(bound,elm) * (nbElem(bound,elm) + 1)  / 2;
}

int main(){
    int res;
    int bound = 1000;
    int elm = 5;

    res = elm * sum(bound, elm);

    elm = 3;
    res += elm * sum(bound, elm);

    elm = 15;
    res -= elm * sum(bound, elm);



    cout << "La sommes des entiers divisible par 3 ou 5 inferieur à 1000 est : " << res << endl;
    return 0;
}