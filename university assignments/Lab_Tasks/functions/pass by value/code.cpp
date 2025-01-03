#include <iostream>
using namespace std;

void modifyValue(int x) {
    x = 10; // Only changes the local copy
}

int main() {
    int num = 5;
    modifyValue(num);
    cout << "Value: " << num << endl; // Original value remains unchanged
    return 0;
}

// Explanation: Pass-by-value copies the argument.