#include <iostream>
using namespace std;

int main(){
    int term;
    int i = 1;
    int sum = 0;
    cout << "Enter any number "<< endl;
    cin >> term;
    while (i <= term){
        cout << i << " * " << i << " = " << (i * i) << endl;
        sum += i * i;
        i++;
    }

    cout << "total sum of the above series is: " << sum << endl;
    return 0;
}