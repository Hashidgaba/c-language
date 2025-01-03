#include <iostream>
using namespace std;

int square(int num) { return num * num; }
double half(double num) { return num / 2; }
void message() { cout << "No return type!" << endl; }

int main()
{
    cout << "Square: " << square(4) << endl;
    cout << "Half: " << half(10.0) << endl;
    message();
    return 0;
}

// Explanation:
//  Demonstrates functions with int, double, and void return types.