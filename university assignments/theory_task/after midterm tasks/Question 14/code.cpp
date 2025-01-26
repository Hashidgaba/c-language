#include <iostream>
using namespace std;

int main() {
    // Initialize the first string
    char str1[] = "Hello";
    char str2[100]; // Declare second string to take input

    // Take input for the second string
    cout << "Enter the second string: ";
    cin.getline(str2, 100); // Use cin.getline to handle spaces in the input

    // Compare both strings
    int i = 0;
    bool areEqual = true;

    // Compare character by character
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            areEqual = false; // If characters differ, strings are not equal
            break;
        }
        i++;
    }

    // Check if the strings are equal or not
    if (areEqual) {
        cout << "The strings are similar." << endl;
        
        // Reverse the first string (initialized one)
        cout << "Reversed string 1: ";
        int length1 = 0;
        // Find the length of str1
        while (str1[length1] != '\0') {
            length1++;
        }
        // Reverse str1
        int start = 0;
        int end = length1 -1;

        while (start < end) {
            char temp = str1[start];
            str1[start] = str1[end];
            str1[end] = temp;
            start++;
            end--;
        }
        cout << str1 << endl;
        
        // Reverse the second string (input string)
        cout << "Reversed string 2: ";
        int length2 = 0;
        // Find the length of str2
        while (str2[length2] != '\0') {
            length2++;
        }
        // Reverse str2
        for (int start = 0, end = length2 - 1; start < end; start++, end--) {
            char temp = str2[start];
            str2[start] = str2[end];
            str2[end] = temp;
        }
        cout << str2 << endl;
    } else {
        cout << "The strings are not similar." << endl;
        
    }

    return 0;
}
