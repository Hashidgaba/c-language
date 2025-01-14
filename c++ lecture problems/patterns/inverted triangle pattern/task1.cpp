#include <iostream>
using namespace std;

int main(){
    int n = 9;
    for(int i = n; i >= 1; i-=2){
        cout << i << ". ";
        for(int j = i; j <= n ; j++){
            cout << "pak";
        }
        cout << endl;
    }
    return 0;
}