#include <iostream>
using namespace std;

int main (){
    //factorial of a numebr 
    int n;
    cout << "enter any number" << endl;
    ;

    cin >>n;
    int product = 1;


    for (int i = 1 ; i <= n ; i++){
        product *= i;

    };
    cout << "factorial form of a "<< n << " is = "<< product <<endl;
    return 0;


}