#include <iostream>
using namespace std;
//sum of all digits of a number
int sumOfdig(int n){
    int digSum = 0;
    for (int i= n; i > 0 ; i-- ){
        int lastDig = n % 10;
        n /= 10;
        digSum += lastDig;
    }
    return digSum;

}
int main(){
    cout << sumOfdig(123);
    return 0;

}