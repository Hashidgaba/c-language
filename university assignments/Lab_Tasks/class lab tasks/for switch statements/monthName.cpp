#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "enter any number from 1 to 12" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "Febuary";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "may";
        break;
    case 6:
        cout << "June";
        break;
    case 7:
        cout << "july";
        break;
    case 8:
        cout << "Aug";
        break;
    case 9:
        cout << "September";
        break;

    case 10:
        cout << "oct";
        break;
    case 11:
        cout << "Nov";
        break;
    case 12:
        cout << "Dec";
        break;
    }
    return 0;
}