#include<iostream>
using namespace std;
int main(){
    int n = 20;
    for (int i = 0; i < n ; i++){
        if(i == 0 || i == n - 1){
            for (int j = 0; j < n; j++){
                cout << "*";
            }
            cout << endl;
        }else{
            cout << "*";
            //spaces
            for (int j = 0 ; j < n - 2; j++){
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
    }
    return 0;


}