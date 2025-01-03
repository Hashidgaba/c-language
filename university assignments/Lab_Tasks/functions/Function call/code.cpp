#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet("Alice");
    greet("Bob");
    return 0;
}

// Explanation: Functions can be called multiple times with different arguments.