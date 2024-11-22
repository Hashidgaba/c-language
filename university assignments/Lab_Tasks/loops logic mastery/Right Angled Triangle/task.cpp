#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter any number"<< endl;
    cin >> n;
    for(int i = 0 ; i < n; i++){//outer loop
        //star
        for (int j = 0; j < i + 1; j++){//inner loop
            cout << "*";
        }
        cout << endl;
    }
    return 0;

}