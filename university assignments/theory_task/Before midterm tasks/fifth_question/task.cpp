#include <iostream>

using namespace std;

int main() {
    float a = 2.0, b = 3.5, c = 4.0, d = 5.0, x = 6.0, y = 7.0;
    float A;

    // for numinator
    float numerator = 7 * 7 * b * (x * y + a) / c - 0.8 + 2 * b * d;

    // for dinominator
    float denominator = (x + a) * (1 / y);

    // Calculate A
    A = numerator / denominator;

    cout << "The value of A is: " << A << endl;

    return 0;
}