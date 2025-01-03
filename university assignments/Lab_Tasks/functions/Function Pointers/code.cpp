#include <iostream>
using namespace std;

void greet() {
    cout << "Hello, World!" << endl;
}

int main() {
    void (*funcPtr)() = greet; // Function pointer
    funcPtr();                 // Call the function
    return 0;
}

// Explanation: Demonstrates a function pointer.
