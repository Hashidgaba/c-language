#include <iostream>
using namespace std;
int main(){
    // inverted triangle pattern
    //nums
    // int n = 4;
    // for (int i = 0; i < n; i++){
    //     // spaces
    //     for (int j = 0; j < i; j++) {
    //         cout << " ";
    //     }
    //     // numebrs
    //     for (int j = 0; j < n - i; j++){
    //         cout << i + 1 ; 
    //     }
    //     cout << endl;
    // }

    // char
    int n = 4;
    char ch = 64; // ASKII value of A is 65
    for (int i = 0; i < n; i++){
        ch++;
        // spaces
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        // numebrs
        for (int j = 0; j < n - i; j++){
            cout << ch;
        }
        cout << endl;
     }
     return 0;
}