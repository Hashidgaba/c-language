#include <iostream>
#include <math.h>
using namespace std;
int squareroot(int a){
    sqrt(a);
}
int sum(int a, int b, int c){
    int sum = a + b + c;
    return sum;
}
int sumOfsquare(int a, int b, int c){
    float sqr1 = squareroot(a);
    float sqr2 = squareroot(b);
    float sqr3 = squareroot(c);
    
    int result  = sum(sqr1, sqr2, sqr3);
    return result;

}   
int main(){
    int a = 5;
    int b = 7;
    int c = 12;
    cout << sumOfsquare(a, b, c);

    return 0;
}