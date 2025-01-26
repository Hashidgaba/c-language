#include <iostream>
using namespace std;
int main(){
    int n, n2;
    cout << "Enter any number" << endl;
    cin >> n;
    n2 = n;
    int num,sum = 0;
    while(n > 0){
        num = n%10;
        sum += num*num*num;
        n/=10;
    }
    if(sum == n2){
        cout << n2 << " is Armstrong Number" << endl;
    }else{
        cout << n2 << " is not Armstrong Number" << endl;
    }
    
    return 0;
}