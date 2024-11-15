#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "enter your marks" << endl;
    cin >> marks;
    if( marks >= 90){
        cout << "Grade is A+" << endl;
    }else if( marks >= 80 && marks <= 89){
        cout << "Grade is A" << endl;
    }else if( marks >= 60 && marks <=79){
        cout << "Grade is B" << endl;
    }else if( marks >= 40 && marks <= 59){
        cout << "Grade is C" << endl;
    }else{
        cout << "Fail, better luck next time" << endl;
    }
    return 0;

}