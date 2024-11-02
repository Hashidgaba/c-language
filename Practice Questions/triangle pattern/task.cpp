#include <iostream>
using namespace std;

int main(){
   // triangle patterns
   int n = 5;
   //int num = 1;
   for (int i = 0 ; i < n; i++){ // outer loop
    for ( int j = 0 ;j <= i; j++ ){// inner loop
        cout <<(i+1);
        // cout << num << " ";
        // num ++;

    }
    cout << endl;
   }

   // characters
   int n2 = 4;
   char ch = 64;
   for (int i = 0; i < n2; i++){
    ch++;
    for (int j = 0; j <= i; j++){
        cout << ch;
        
    }
    cout << endl;
   }
    return 0;

}