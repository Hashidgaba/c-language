#include <iostream>
using namespace std;

void display(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    display();          // Uses default parameter
    display("Alice");   // Uses provided argument
    return 0;
}

// Explanation:
//  Demonstrates the use of default parameters.