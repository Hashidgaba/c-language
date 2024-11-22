#include<iostream>
using namespace std;
int main(){
    int n = 9;
    for (int i = 1; i<= n;i++){
        //spaces
        for (int j = i; j < n ; j++){
            cout << " ";
        }
        for (int j = 1; j <= (2 * i)-1;j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;

}