#include <iostream>
using namespace std;
int main(){
    int n = 20;
    for (int i = 1; i<=n; i++){
        //spaces
        for (int j = n - i ; j >= 1;j--){
            cout << " ";
        }
        //binary numebr
        for (int j = i; j >=1; j--){
            if((i + j ) % 2 == 0){
                cout << "1";
            }else {
                cout << "0";
            }
        }
        //binary number 2
        for (int j = 1; j < i; j++){
            if((i + j ) % 2 == 0){
                cout << "0";
            }else {
                cout << "1";
            }
        }
        cout << endl;
    }
    return 0;

}