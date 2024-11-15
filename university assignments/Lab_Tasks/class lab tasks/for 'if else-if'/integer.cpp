#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter any number: " << endl;
    cin >> n;
    if(n > 0) cout << "positive" << endl;
    else if( n < 0) cout << "Negative" << endl;
    else if( n = 0) cout << "zero" << endl;
    else cout << "invalid number" << endl;
    return 0;

}