#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        if (i != n)
        {
            // star
            cout << "*";
            // spaces
            for (int j = 1; j < i; j++)
            {
                cout << " ";
            }
            if (i != 1)
            {
                cout << "*";
            }

            cout << endl;
        }else {
            for (int j = 1; j <= n;j++){
                cout << "*";
            }
        }
    }

    return 0;
}