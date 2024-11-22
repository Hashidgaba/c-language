#include <iostream>
using namespace std;
int main()
{
    int n = 50;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 1; j < i + 1; j++)
        {
            if(i != 0){
                cout << " ";
            }
        }
        cout << "*";
        cout << endl;
    }
    return 0;
}