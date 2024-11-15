#include <iostream>
using namespace std;
int main(){
    int age;
    double income;
    double loan;
    int monthlyInstallment;
    cout << "first you have to enter your age" << endl;
    cin >> age;
    cout << "enter your income" << endl;
    cin >> income;
    if(age >= 20){
        if(income > 150000){
            cout << "----------eligiblity aprove----------" << endl;
            cout << "Enter loan amount which you want to pass but makesure you have to pay in 20 years of time period" << endl;
            cin >> loan;
            monthlyInstallment = loan / (20 * 12);
            cout << "you have to pay " << monthlyInstallment << " every month" << endl;

        }else{
            cout << "your income is not enough to pass any loan" << endl;
        }

    }else{
        cout << "you are not eligible to pass any loan because you are under age, age is must be greater than 20" << endl;
    }
    return 0;

}