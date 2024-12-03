#include <iostream>
#include <string>
using namespace std;
int main()
{
    string pass = "123";
    string correctpass;

    for (int attempt = 1; attempt <= 3; attempt++)
    {
        cout << " Enter password " << " \nAttempt  " << attempt << " ";
        cin >> correctpass;
        if (correctpass == pass)
        {
            cout << "Access Granted " << endl;
            break;
        }
        else
        {
            cout << "Access denied " << endl;
        }
    }

    return 0;
}