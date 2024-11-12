#include <iostream>
using namespace std;
//print all prime numbers from 2 to N
void allPrimeNumber(int n){
    cout << "following are the all prime numbers: form 1 to "<<n << endl;
    for (int i = 2;  i <= n; i++){
        bool isPrime = true;
       for (int j = 2 ; j < i ; j++){
        if(i % j == 0){
            isPrime = false;
            break;
        }
       }
       if(isPrime == true){
        cout << i << " ";
       }
    }
    cout << endl;
}

int main(){
    allPrimeNumber(8);
    allPrimeNumber(12);
    allPrimeNumber(13);
    return 0;
}