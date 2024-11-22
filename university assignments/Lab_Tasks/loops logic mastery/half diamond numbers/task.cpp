#include <iostream>
using namespace std;
int main(){
    int n = 9;
    //upper
    for (int i =1 ; i<= n;i++){
        for (int j = 1; j<= i;j++){
            cout << j;
        }
        cout << endl;
    }
    //bottom
    for (int i = 1; i < n;i++){
        for (int j = 1; j<= n - i;j++){
            cout << j;
        }
        cout << endl;
    }
}