#include <iostream>
using namespace std;
int main(){
    int n =5;
    for (int i = 1 ; i<= n; i++){
        //spaces
        for (int j = i; j < n; j++){
            cout << " ";
        }
        //number
        for (int j =1; j <= i ; j++){
            cout << j;
        }
        //number
        for (int j = 1; j < i ; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;

}