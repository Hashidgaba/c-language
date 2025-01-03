#include <iostream>
using namespace std;

class Counter {
    static int count;

public:
    Counter() { count++; }
    static int getCount() { return count; }
};

int Counter::count = 0;

int main() {
    Counter obj1, obj2, obj3;
    cout << "Objects created: " << Counter::getCount() << endl;
    return 0;
}

// Explanation: Demonstrates a static function to track object count.