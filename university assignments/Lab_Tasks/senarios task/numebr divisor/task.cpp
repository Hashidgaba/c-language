#include <iostream>
using namespace std;
int main(){
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

   
    if (num <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; 
    }

   
    cout << "Divisors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) { 
            cout << i << " "; 
        }
    }

    cout << endl;  
    return 0;

}