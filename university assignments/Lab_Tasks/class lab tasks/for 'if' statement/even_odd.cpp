#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter any number which you want to check if a number is even or odd" << endl;
    cin >> num;
    if(num % 2 == 0)cout << "Even" << endl;
    if(num % 2 != 0) cout << "Odd" << endl;
    return 0;

}