#include <iostream>
using namespace std;

int main(){
    // reverse triangle pattern
    // numebr system
    int n =10;
    for (int i = 0; i < n ; i ++){
        for (int j = i + 1; j > 0 ; j--){
            cout << j << " ";
        }
        cout << endl;

    }

    // floyds triangle pattern
    // numebr system
    int n1 = 5;
    int num = 1;
    for ( int i = 0; i < n1; i++){
        for (int j = 0; j <= i; j++){
            cout << num ;
            num++;
        }
        cout << endl;
    }

    // character system
    int n2 = 4;
    char ch = 'A';
    for (int i = 0; i < n2 ; i++){
        for (int j = 0 ; j <= i; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;

}