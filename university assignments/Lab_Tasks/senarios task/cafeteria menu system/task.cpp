#include <iostream>
using namespace std;

int main()
{
    int menu;
    int totalBill = 0;

    cout << "-----------------Cafeteria Menu System------------------" << endl;
    cout << "1. Tea $2 " << endl;
    cout << "2. Coffee $3 " << endl;
    cout << "3. Sandwich $4 " << endl;
    cout << "4. Burger $5 " << endl;
    cout << "5. FOR EXIT " << endl;
    cout << "order something" << endl;

    do
    {
        cin >> menu;
        switch (menu)
        {

        case 1:
            cout << "thanka for ordering Tea" << endl;
            totalBill += 2;
            cout << "Total = $" << totalBill << endl;
            cout << "Order another one" << endl;
            break;
        case 2:
            cout << "thanka for ordering coffee" << endl;
            totalBill += 3;
            cout << "Total = $" << totalBill << endl;
            cout << "Order another one" << endl;

            break;
        case 3:
            cout << "thanka for ordering sandwich" << endl;
            totalBill += 4;
            cout << "Total = $" << totalBill << endl;
            cout << "Order another one" << endl;

            break;
        case 4:
            cout << "thanka for ordering Burger" << endl;
            totalBill += 5;
            cout << "Total = $" << totalBill << endl;
            cout << "Order another one" << endl;

            break;
        case 5:
            cout << "thanks for choosing us! see you soon" << endl;
            break;
        default:
            cout << "Invalid Num" << endl;
        }
    } while (menu != 5);

    cout << "Total Bill $" << totalBill << endl;

    return 0;
}