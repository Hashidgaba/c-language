#include <iostream>
using namespace std;
//  convert decimal to binary number system
int decimalTobinary(int decNum){
    int ans = 0 , pow = 1;
    while(decNum > 0){
        int rem = decNum % 2 ;
        decNum /=2;
        ans += (rem * pow);
        pow *= 10;

    }
    cout << ans << endl;
}


int main(){
    int decNum;
    cout << "enter any number which you want to convert into binary" << endl;
    cin >> decNum;
    decimalTobinary(decNum);
    return 0;

}