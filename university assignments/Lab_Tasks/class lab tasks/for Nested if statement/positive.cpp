#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter any number" << endl;
    cin >> num;
    if(num > 0){
        if( num % 2 == 0){
            cout << num << " is even" << endl;
        }else{
            cout << num << " is not even number" << endl;
        }
    }else{
        cout << "invalid number" << endl;
    }
    return 0;

}