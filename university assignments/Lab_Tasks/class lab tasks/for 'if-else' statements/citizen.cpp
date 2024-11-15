#include <iostream>
using namespace std;
int main(){
   int age;
   cout << "Enter your age if you want to get senior citizen discount."<< endl;
   cin >> age;
   if(age >= 65) cout << "congratulations! you are eligible to get a discount." << endl;
   else cout << "sorry, but you are under age" << endl;

    return 0;

}