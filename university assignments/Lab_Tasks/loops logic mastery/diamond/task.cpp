#include <iostream>
using namespace std;
int main(){
    int n = 17;
    //upper loop
    for (int i = 1; i <= n; i++){
        //spaces
        for (int j = 1; j <= n -i; j++ ){
            cout << " ";
        }
        //star
        for (int j = 0 ; j < (2 * i) - 1; j++){
            cout << "*";
        }
        cout << endl;
    }
    // bottom loop
    for (int i = n - 1; i > 0;i--){
        //spaces
            for (int j = 0 ; j < n - i; j++){
                cout << " ";
            }
        //star
        for (int j = 0 ; j < ( 2 * i)- 1; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;

}