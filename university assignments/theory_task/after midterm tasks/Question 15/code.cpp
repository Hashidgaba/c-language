#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int Count[256] = {0}; // Array to store character frequencies

    cout << "Enter your String: " << endl;
    getline(cin, input);

    // Count occurrences of each character
    for (int i = 0; input[i] != '\0'; i++) {
        Count[input[i]]++;
    }

    // Display the counts
    cout << "The count of each character is:\n";
    for (int i = 0; i < 256; i++) { // Corrected loop condition
        if (Count[i] > 0) { // Only print characters that appear in the string
            cout << (char)i << " " << Count[i] << endl;
        }
    }

    return 0;
}