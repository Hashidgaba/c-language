#include <iostream>
using namespace std;
int main(){
    //ask a user any number and check if a number is positive ,negative or zero
    int num;
    cout << "Enter any numebr as you want:" << endl;
    cin >> num;
    if(num > 0 || num < 0){
        if(num > 0){
            cout << "you entered positive";
            cout << endl;
        }else{
            cout << "you entered negative";
            cout << endl;
        }

    }else{
        cout << "you entered something wrong! try again";
    }

    return 0;
}