#include <iostream>
using namespace std;
int main(){
    // create a program that check if the number is positive ,negative or zero;
    int num;
    cout << "Enter any number: "<< endl;
    cin >> num;
    // if (num > 0){
    //     cout << "the number you have entered is positive! ";
    //     cout << endl;
    // }else if( num < 0){
    //     cout << "the numebr you have entered is negative! ";
    //     cout << endl;
    // }
    // else{
    //     cout << "something wrong, try again!";
    //     cout << endl;
    // }
    if (num > 0 || num < 0 ){
        if(num > 0){
            cout << "positive";
            cout << endl;
        }else{
            cout << "negative";
            cout << endl;
        }
    }else{
        cout << "you enetred something wrong";
        cout << endl;
    }
    return 0;
}