#include <iostream>
using namespace std;
int main()
{
    int n = 9;
    // upper
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        // str
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        // str
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    // bottom
    for (int i = 1; i <= n; i++)
    { // outer loop
        // spaces
        if (i != 1)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
        }else{
            continue;
        }
        // str
        for (int j = 1; j <= i; j++)
        {
            if (i != 1)
            {
                cout << "*";
            }
        }
        // str
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
