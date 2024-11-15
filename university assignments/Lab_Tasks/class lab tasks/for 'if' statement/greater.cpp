#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter any number which is greater than 100" << endl;
    cin >> num;
    if(num > 100) cout << "Number is greater than 100" << endl;
    if(num <= 100) cout << "ops! Number is not greater than 100" << endl;

    return 0;

}