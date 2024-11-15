#include <iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    cout << "enter first number" << endl;
     cin >> num1;
     cout << "enter second number" << endl;
     cin >> num2;
     if( num1 > num2 ){
        cout << num1 << " is greater" << endl;
     }else{
        cout << num2 << " is greater" << endl;
     }
    return 0;

}