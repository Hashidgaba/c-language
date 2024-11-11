#include <iostream>
using namespace std;
int main (){
    // find if a number is prime or not 
    int n;
    bool Isprime = true;
    cout << "Enter any number if you want to find prime number: "<< endl;
    cin >> n;

    for (int i = 2 ; i < n ; i++){
        if(n % i == 0){
            Isprime = false;
            break;
        }

    }
    if (Isprime == true){
        cout << n << " is a prime number" << endl;
    }else{
        cout << n << " is a non prime number" << endl; 
    }

return 0;

}