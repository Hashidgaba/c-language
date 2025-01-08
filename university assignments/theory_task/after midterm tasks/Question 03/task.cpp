#include <iostream>
using namespace std;

int main(){
    int n;
    int positive = 0;
    int negative = 0;
    cout << "Enter any Number" << endl;

    do{
       cin >>n;
       if(n < 0 ){
        negative ++;
       }else{
        positive++;
       }

    }while(n != 0);
    cout << "Number of Positive is: " << positive<< endl;
    cout << "Number of Negative is: " << negative<< endl;
    return 0;
}