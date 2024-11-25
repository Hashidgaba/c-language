#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice, number;

    cout << "---------------Choose an option:---------------\n";
    cout << "1. Calculate square root\n";
    cout << "2. Calculate cube\n";
    cout << "3. Print number 50 times\n";
    cout << "4. Print table of the number\n";
    cin >> choice;

    cout << "Enter a number: ";
    cin >> number;

    switch (choice) {
        case 1:
            cout << "Square root of " << number << " is " << sqrt(number) << endl;
            break;
        case 2:
            cout << "Cube of " << number << " is " << pow(number, 3) << endl;
            break;
        case 3:
            for (int i = 0; i < 50; i++) {
                cout << i << ". " << number << " ";
            }
            cout << endl;
            break;
        case 4:
            for (int i = 1; i <= 10; i++) {
                cout << number << " x " << i << " = " << number * i << endl;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}