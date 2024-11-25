#include <iostream>
using namespace std;

int main() {
    int mainOption, subOption;

    cout << "=== Game Control Options ===" << endl;
    cout << "1. Display Options" << endl;
    cout << "2. Audio Settings" << endl;
    cout << "3. Exit" << endl;
    cout << "Choose an option (1-3): ";
    cin >> mainOption;

    switch (mainOption) {
        case 1: // Display Options
            cout << "\n=== Display Options ===" << endl;
            cout << "1. Resolution" << endl;
            cout << "2. Brightness" << endl;
            cout << "3. Back" << endl;
            cout << "Choose a sub-option (1-3): ";
            cin >> subOption;

            switch (subOption) {
                case 1:
                    cout << "You selected 'Resolution'." << endl;
                    cout << "Options: 1080p, 720p, 4K." << endl;
                    break;
                case 2:
                    cout << "You selected 'Brightness'." << endl;
                    cout << "Options: Low, Medium, High." << endl;
                    break;
                case 3:
                    cout << "Returning to the main menu..." << endl;
                    break;
                default:
                    cout << "Invalid sub-option." << endl;
            }
            break;

        case 2: // Audio Settings
            cout << "\n=== Audio Settings ===" << endl;
            cout << "1. Volume" << endl;
            cout << "2. Sound Effects" << endl;
            cout << "3. Back" << endl;
            cout << "Choose a sub-option (1-3): ";
            cin >> subOption;

            switch (subOption) {
                case 1:
                    cout << "You selected 'Volume'." << endl;
                    cout << "Options: Mute, Low, Medium, High." << endl;
                    break;
                case 2:
                    cout << "You selected 'Sound Effects'." << endl;
                    cout << "Options: Enabled, Disabled." << endl;
                    break;
                case 3:
                    cout << "Returning to the main menu..." << endl;
                    break;
                default:
                    cout << "Invalid sub-option." << endl;
            }
            break;

        case 3: // Exit
            cout << "Exiting the game menu. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid option. Please restart the program and try again." << endl;
    }

    return 0;
}