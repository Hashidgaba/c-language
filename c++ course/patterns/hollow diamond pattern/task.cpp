#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter any number: " << endl;
    cin >> n;

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
    //bottom
    for (int i = 0 ; i < n - 1 ; i++){
        //spaces
        for (int j = 0; j < i + 1; j++){
            cout << " ";
        }
        cout << "*";
        //sapces
        
        if ( n - i - 1 > 1){
            for (int j = 2 * (n - 2 - i)-1 ; j > 0 ; j-- ){
            cout << " ";
        }
        cout << "*";
        }
        // if (n - i -1 > 1)cout << "*";
        

        cout << endl;
    }
    
    return 0;

}