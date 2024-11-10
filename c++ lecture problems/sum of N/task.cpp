#include <iostream>
using namespace std;

int main(){
    //sum of all numbers from 1 to n which are divisible by 3
    int n;
    cout << "ENTER ANY NUMBER: " <<endl;
    cin >> n;
    int sum = 0;

    for ( int i = 1; i <= n ; i++){

        if( i % 3 == 0 ){
            sum += i;

        }
    }
    cout <<"sum of all number form 1 to "<<  n <<" which are divisible by 3 = "<< sum;

    return 0;



}