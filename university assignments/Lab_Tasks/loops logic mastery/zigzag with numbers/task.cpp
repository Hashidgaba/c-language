#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int number = 1;
    int number1 = 1;
    for (int i = 1; i<= n; i++){
        //spaces
        for (int j = 1; j < i ; j++){
            cout << " ";
        }
        //numbers
        cout << number;
        number ++;
        //spaces
        for (int j = (2 * i) - 1; j <= n + 2; j++ ){
            cout << " ";
        }
        //numebr 2
        if (i != n){
            cout << number1;
        }
        number1 ++;

        cout << endl;
    }
    return 0;

}