#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }

int main() {
    cout << "Int sum: " << add(3, 7) << endl;
    cout << "Double sum: " << add(3.5, 7.5) << endl;
    return 0;
}

// Explanation: Overloads add for integers and doubles.