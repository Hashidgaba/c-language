#include <iostream>
using namespace std;
int main(){
    int n =5;
    for (int i = 1; i <= n; i++){//upper loop
        //spaces
        for (int j = 1; j < i + 1; j++){
            cout << " ";
        }
        //str
        cout << "*";
        //spaces
       for (int j = n + 2 ; j >= (2 * i) -1; j-- ){
        cout << " ";
       }
       //str
       if(i != n ){
        cout << "*";
       }
        cout << endl;
    }
    //bottom loop
    for (int i = 1; i <= n - 1; i++){
        //spaces
        for (int j = 1; j <= n - i; j++ ){
            cout << " ";
        }
        //str
        cout << "*";
        //spaces
        for (int j = 0; j < ( 2 * i)-1; j++ ){
            cout << " ";
        }
        cout << "*";
        cout << endl;
        
    }
    return 0;

}