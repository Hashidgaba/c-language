#include <iostream>
using namespace std;
int main(){
    int grade;
    cout << "enter grade" << endl;
    cin >> grade;
    if( grade > 50 ) cout << "pass" << endl;
    else cout << "Fail, better luck next time" << endl;
    return 0;

}