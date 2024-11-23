#include <iostream>
#include <math.h>
using namespace std;
int main(){
    //solve the quadratic eq
    double a, b , c, disciminant;
    float x1, x2;
    cout << "enter coefficient of a" << endl;
    cin >> a;
    cout << "enter coefficien of b" << endl;
    cin >> b;
    cout << "enter coefficient of c" << endl;
    cin>> c;
    disciminant = b * b -4 * a * c;
    x1 = (-b + sqrt(disciminant))/ (2 * a);
    x2 = (-b - sqrt(disciminant)) / (2 * a);
    cout << "value of x1 is = " << x1 << endl;
    cout << "value of x2 is = " << x2 << endl;
    return 0;

}