#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter any number which is divisible by 2 and 3 " << endl;
    cin >> num;
    if(num % 2 == 0 || num % 3 == 0){
        if(num % 2 == 0 && num % 3== 0){
            cout << num << " is divisible by 2 and 3" << endl;
        }
        else if (num % 2 == 0) {
            cout << num << " is only divisible by 2" << endl;
        }else if (num % 3 == 0){
            cout << num << " is only divisible by 3" << endl;
        }

    }else{
        cout << num << " is neither divisible by 2 nor 3" << endl;

    }
    return 0;

}