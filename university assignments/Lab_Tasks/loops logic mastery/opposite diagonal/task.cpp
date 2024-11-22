#include <iostream>
using namespace std;

int main(){
    int n = 100;
    for (int i = 0; i < n; i++){
        //spaces
        for (int j = 1; j < n - i;j++ ){
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    return 0;

}