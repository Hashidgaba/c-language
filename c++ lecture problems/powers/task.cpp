#include <iostream>
#include <Math.h>
using namespace std;

int main(){
    //write a program to find out if a numebr is the power of two or not
    int n = 16;
    for(int i = 2; i <= n; i++){
        int power = 2;
        int expo = pow(power , i);
        if(expo == n){
            cout << n << " is the power of 2"<< endl;
            break;
        }
        else if(expo != n && i == n){
            cout <<n <<" is not a power of 2" << endl;
            break;
        }
    }
    return 0;
}