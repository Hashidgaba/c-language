#include <iostream>
using namespace std;
int main(){
    int n = 9;
   for (int i = 1; i <= n; i++){
    //spaces
    for (int j = 1; j < i ; j++){
        cout << " ";
    }
    //number
    for (int j = 1; j < n - i + 2 ; j++){
        cout << j;
    }
    //number
    for (int j = n - i; j >= 1;j--){
        cout << j;    
        }
    cout << endl;
   }
    return 0;

}