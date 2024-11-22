#include <iostream>
using namespace std;
int main(){
    int n = 16;
    for (int i = 0; i <= n; i++){
        for (int j =0; j< n; j++){
            //even logic
            if( n % 2== 0){
                if( j + 1 == n / 2){
                    cout << "*";
                }else if( i + 1 == n /2){
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }else{//odd logic
               if(j == (n - 1)/2){
                cout << "*";
               }else if( i == (n - 1)/2){
                cout << "*";
               }else {
                cout << " ";
               }
            }
        }
        cout << endl;
    }
    return 0;

}