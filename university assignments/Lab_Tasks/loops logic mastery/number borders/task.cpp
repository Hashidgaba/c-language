#include <iostream>
using namespace std;
int main(){
    int n = 10;
    int number = 1;
    for (int i = 1; i <= n;i++){
       if(i == 1 || i == n){
        for (int j = 1; j<= n;j++){
            cout << number;
        }
       }else{
        cout << number;
        for (int j = 1; j <= n - 2; j++){
            cout << number - 1;
        }
        cout << number;
       }
       cout << endl;
    }
    return 0;

}