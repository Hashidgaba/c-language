#include <iostream>
#include <string>

using namespace std;

int main() {
    string id, password;

    cout << "Enter your ID: ";
    cin >> id;

    switch (id[0]) {
        case 'A':
            if (id == "A123") {
                cout << "Enter your password: ";
                cin >> password;

                if (password == "password123") {
                    cout << "Welcome, User A!" << endl;
                } else {
                    cout << "Incorrect Password" << endl;
                }
            } else {
                cout << "Incorrect ID" << endl;
            }
            break;
        case 'B':
            if (id == "B456") {
                cout << "Enter your password: ";
                cin >> password;

                if (password == "password456") {
                    cout << "Welcome, User B!" << endl;
                } else {
                    cout << "Incorrect Password" << endl;
                }
            } else {
                cout << "Incorrect ID" << endl;
            }
            break;
        default:
            cout << "Incorrect ID" << endl;
    }

    return 0;
}