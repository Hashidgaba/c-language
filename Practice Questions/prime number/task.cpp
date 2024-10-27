#include <iostream>
using namespace std;
int main (){
    // find if a number is prime or not 
    int n;
    cout << "Enter any number if you want to find prime number: "<< endl;
    cin >> n;

    for (int i = 2 ; i < n ; i++){
        if(n % i == 0){
            cout << "non prime number";
            break;
        }else{
            cout << "prime number";
            break;
        }

    }

}