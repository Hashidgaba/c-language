#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int number = 1;

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // numebr
        cout << number;
        number++;

        // spaces
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << " ";
        }
        if (i > 0)
        {
            cout << number;
            number++;
        }
        cout << endl;
    }
    number = number - 2;
    // bottom
    for (int i = 0; i < n - 1; i++)
    {
        // spaces
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        // number
        --number;
        cout << number;

        // sapces

        if (n - i - 1 > 1)
        {
            for (int j = 2 * (n - 2 - i) - 1; j > 0; j--)
            {
                cout << " ";
            }
            --number;
            cout << number;
        }
        cout << endl;
    }

    return 0;
}