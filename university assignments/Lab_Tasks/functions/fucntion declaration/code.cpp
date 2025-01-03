#include <iostream>
using namespace std;

// Function declaration 
int add(int a, int b);

int main() {
    cout << "Sum: " << add(3, 7) << endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

// Explanation: 
// The function is declared before main funciton to inform the compiler about its existence.
