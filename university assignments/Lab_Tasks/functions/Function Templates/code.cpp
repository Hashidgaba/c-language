#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max int: " << maximum(3, 7) << endl;
    cout << "Max double: " << maximum(3.5, 2.5) << endl;
    return 0;
}

// Explanation: Template function works with any data type.
