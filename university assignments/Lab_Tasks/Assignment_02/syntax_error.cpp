#include <iostream>
using namespace std;
int main(){
    // following are the wrong syntax
    int x  = "hello";// cannpt assign string in integer;
    cout << y; // y are misisng
    int a = 24;
    cout << a + b; // b is missing


    // correct version of above code 
    string x = "hello";
    int y = 5; // first initialize the value of y 
    cout << y;
    int a = 24;
    int b = 10;
    cout << a +b;

    return 0;
    
}