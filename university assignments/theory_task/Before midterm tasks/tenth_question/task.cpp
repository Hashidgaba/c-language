#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    // solve the quadratic equation
    cout << "---------------solve quadratic equation--------------" << endl;
    double a, b, c, discriminant;
    double x1, x2;
    cout << "enter coefficient of a, b, c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    discriminant = pow(b, 2) - 4 * a * c;
    // if discriminant is become negative
    if (discriminant < 0)
    {
        x1 = (-b + sqrt(-discriminant)) / (2 * a);
        x2 = (-b - sqrt(-discriminant)) / (2 * a);
        cout << "value of x1 is = " << x1 << "i" << endl;
        cout << "value of x2 is = " << x2 << "i" << endl;
    }
    //when discriminant is become zero
    else if (discriminant == 0)
    {
        x1 = (-b) / (2 * a);
        x2 = (-b) / (2 * a);
        cout << "value of x1 is = " << x1 << endl;
        cout << "value of x2 is = " << x2 << endl;
    }
    //when discriminant is become positive
    else
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "value of x1 is = " << x1 << endl;
        cout << "value of x2 is = " << x2 << endl;
    }

    return 0;
}