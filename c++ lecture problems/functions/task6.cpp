#include <iostream>
using namespace std;
//prime number
void primeNumber(int n){
    bool Isprime = true;
    for (int i = 2; i < n; i++){
        if(n % i == 0){
            Isprime = false;
            break;
        }
    }
    if(Isprime == true){
        cout << n <<" is a prime" << endl;
    }
    else{
        cout << n << " is a non prime" << endl;
    }
    return;
}
int main(){
    primeNumber(7);
    primeNumber(15);
    primeNumber(17);
    primeNumber(71);
    primeNumber(72);


    return 0;
}