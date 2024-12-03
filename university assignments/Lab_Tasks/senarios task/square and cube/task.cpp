#include <iostream>
#include <iomanip>
using namespace std;
int main(){
     int n;

    
    cout << "Enter a positive integer n: ";
    cin >> n;

    
    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1; 
    }

  
    cout << setw(8) << "Number" << setw(10) << "Square" << setw(10) << "Cube" << endl;
    cout << "-----------------------------" << endl;

   
    for (int i = 1; i <= n; i++) {
        int square = i * i;
        int cube = i * i * i;
        
        cout << setw(8) << i << setw(10) << square << setw(10) << cube << endl;
    }

    return 0;

}