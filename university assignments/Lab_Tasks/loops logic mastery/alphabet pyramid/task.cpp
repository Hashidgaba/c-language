#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        char ch = 65;
        char ch1 = 65;
        // spaces
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        // char
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        // char2
        for (int j = 1; j < i; j++)
        {
           cout << ch1;
           ch1++;
        }
        cout << endl;
    }
    return 0;
}