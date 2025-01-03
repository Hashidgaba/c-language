
#include <iostream>
using namespace std;

// Function overloads with different signatures
void display(int integerNumber) {
    cout << "Integer: " << integerNumber << endl;
}

void display(double doubleNumber) {
    cout << "Double: " << doubleNumber << endl;
}

int main() {
    display(5);        // Calls the int version
    display(5.5);      // Calls the double version
    return 0;
}

// Explanation: This demonstrates how the compiler differentiates function overloads based on their signatures.