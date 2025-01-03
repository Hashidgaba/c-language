#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square: " << square(5) << endl;
    return 0;
}

// Explanation: Inline functions suggest the compiler to expand the function code inline.