#include <iostream>
using namespace std;
int main(){
   double tax, taxRate, income;
   cout << "enter your income" << endl;
   cin >> income;
   if(income <= 50000){
    tax = 0.05;
   }else if(income <= 100000 && income > 50000){
    tax = 0.10;
   }else if(income > 100000 && income <= 200000){
    tax = 0.15;
   }
   else if(income > 200000 && income < 400000){
    tax = 0.25;
   }else{
    tax = 0.30;
   }
   taxRate = tax * income;
   cout << "the tax rate base on your income is " << taxRate << endl;

    return 0;
}