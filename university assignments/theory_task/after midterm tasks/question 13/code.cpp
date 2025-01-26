#include <iostream>
using namespace std;

int main() {
    char str[1000];
    int vowels = 0, consonants = 0, uppercase = 0, lowercase = 0, 
        special = 0, words = 0, digits = 0, i = 0;

    cout << "Enter a string: ";
    cin.getline(str, 1000); // Read input string

    while (str[i] != '\0') {
        char ch = str[i];

        // Count vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Count consonants
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }

        // Count uppercase and lowercase
        if (ch >= 'A' && ch <= 'Z') {
            uppercase++;
        } else if (ch >= 'a' && ch <= 'z') {
            lowercase++;
        }

        // Count digits
        if (ch >= '0' && ch <= '9') {
            digits++;
        }

        // Count special characters
        if (!(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z') && 
            !(ch >= '0' && ch <= '9') && ch != ' ' && ch != '\n') {
            special++;
        }

        // Check for words (count spaces as separators)
        if (ch == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            words++;
        }

        i++;
    }

    // Count the last word if the string is not empty
    if (i > 0 && str[i - 1] != ' ') {
        words++;
    }

    // Output results
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Uppercase letters: " << uppercase << endl;
    cout << "Lowercase letters: " << lowercase << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << special << endl;
    cout << "Words: " << words << endl;

    return 0;
}
