#include <iostream>
using namespace std;
//convert binary to decimal
int binaryTodecimal(int binaryNum){
    int ans = 0;
    int pow = 1;
    while(binaryNum > 0){
        int rem = binaryNum % 10;
        ans += rem * pow;
        binaryNum /= 10;
        pow *=2;
    }
    cout << ans << endl;
}
int main(){
    binaryTodecimal(10110);
    return 0;

}