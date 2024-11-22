#include <iostream>
using namespace std;
int main(){
    int n = 5;
    for (int i = 0; i < n ; i++){//outer loop
        //spaces
        for (int j = 1 ; j < n - i ; j ++){
            cout << " ";
        }
        //star
        for (int j = 0; j < i + 1; j++){
            cout << "*";
        }
        //star
        for (int j = 1; j < i + 1; j++){
            if(i != 0){
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;

}