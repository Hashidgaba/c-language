#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    cout << "Sum 1: " << add(3, 7) << endl;
    cout << "Sum 2: " << add(10, 15) << endl;
    return 0;
}

// Explanation: The function is called with different argument values.