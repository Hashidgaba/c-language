#include <iostream>
using namespace std;
// square patterns 
int main(){
    // characters 
    int n = 5;
    char ch = 'A';
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n ; j++){
            cout << ch;
            ch++;
        }
        cout << endl;

    }

    cout << endl;

    // numbers
     int n2 = 6;
    //  int num = 1;
      for (int i = 0; i<n2 ; i++){
        for (int j = 0; j < n2 ; j++){
            cout << j + 1;
            // num++
        }
        cout << endl;
      }
   
    return 0;
}
