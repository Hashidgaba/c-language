#include <iostream>
using namespace std;

void modifyValue(int &x) {
    x = 10; // Changes the actual variable
}

int main() {
    int num = 5;
    modifyValue(num);
    cout << "Value: " << num << endl; // Original value is modified
    return 0;
}

// Explanation: Pass-by-reference allows modifying the original variable.