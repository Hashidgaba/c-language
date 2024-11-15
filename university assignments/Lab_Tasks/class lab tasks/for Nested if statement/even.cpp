#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter any number which is even and greater than 10" << endl;
    cin >> num;
    if( num % 2 == 0) {
       if( num > 10) {
        cout << "very good! you enter correct number" << endl;
       }else{
        cout << "number is even but not greater than 10" << endl;
       }
    }
    else{
        cout << "ops! number is not even, please enter even number" << endl;
    }
    return 0;

}