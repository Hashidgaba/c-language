#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = 0; i < n ; i++){
        //spaces
        for (int j = 0; j < n - i -1; j++){
            cout << " ";
        }
        //star
        cout << "*";
        // spaces

        for (int j = 0; j < 2 * i - 1; j++){
            cout << " ";
        }
        if(i > 0)cout << "*";

        cout << endl;
    }

    for (int i = 0 ; i < n - 1 ; i++){
        //spaces
        for (int j = 0; j < i + 1; j++){
            cout << " ";
        }
        cout << "*";
        //sapces
        for (int j = 2 * (n - 2 - i)-1 ; j > 0 ; j-- ){
            cout << " ";
        }
        if (i != n - 1) cout << "*";

        cout << endl;
    }
    
    return 0;

}