#include <iostream>
using namespace std;
int main()
{
    int n = 15;
    for (int i = 0; i < n ; i++)
    {
        if (i != n - 1)
        {
            // spaces
            for (int j = 1; j < n - i - 1; j++)
            {
                cout << " ";
            }
            // str
            cout << "*";
            // spaces
            for (int j = 1; j <= (2 * i) - 1; j++)
            {
                cout << " ";
            }
            // str
            if (i != 0)
            {
                cout << "*";
            }
            cout << endl;
         }else{
            for (int j = 1; j < n ; j++){
                cout << "* ";
            }
            cout << endl;
         }
    }

    return 0;
}