#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
        {   //spaces
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            // star
            cout << "*";
            // spaces
            for (int j = 0; j < (2 * i) - 1; j++)
            {
                cout << " ";
            }
            //star
            if (i > 0)
            {
                cout << "*";
            }
        }else{
            char str = ( 2 * i) -1 ;
            cout << " ";
            for (int j = 0; j < str; j++){
                cout << "*";
            }
        }

        cout << endl;
    }
    return 0;
}