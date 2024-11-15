#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "enter your age" <<endl;
    cin >> age;
    if(age >= 18) cout << "you are eligible to vote" << endl;
    if (age < 18) cout << "ops! you are not eligible to vote , just go and grow your self" << endl;
    return 0;

}