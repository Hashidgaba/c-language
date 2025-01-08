#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter any number"<<endl;
    cin >> n;

    int i = n;
    while(i >= 1){
        int j = i;
        while(j >= 1){
            cout << j << " ";
            j--;
        }
        cout << endl;
        i--;
    }
    return 0;

}