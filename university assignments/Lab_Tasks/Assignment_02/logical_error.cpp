#include <iostream>
using namespace std;
int main(){
    //foolowing logic is wrong  
    // i want to find even and odd number
    int a ;
    cout << "enter any number";
    cin >> a;
     if (a / 2 == 0){cout << "even";}
     else{cout << "odd";}

    // following logic is correc

    int b;
    cout << "enter any number";
    cin >> b;
     if ( b % 2 == 0){

        cout << "even";

     }else{
        cout << "odd";

     }
    return 0;
    
}