#include <iostream>
using namespace std ;
int main (){
    //sum of numbers from 1 to n
    int n;
    int sum = 0;
    cout << "Enter any number, you will get the sum of all numbers from 1: " << endl;
    cin >> n;
    for (int i = 1; i <= n ; i++){
        sum += i;


    };
    cout << "sum of all numbers from 1 to "<< n <<" = "<< sum;

    return 0; 
}