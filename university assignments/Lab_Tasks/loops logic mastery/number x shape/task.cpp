#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int number = 1;
    int number1 = 1;
    // upper
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        //str
        cout << number;
        number ++;
        //spaces
        for (int j = (2 * i)-1; j <= n;j++){
            cout << " ";
        }
        if(i != n){
            cout << number1;
            number1++;
        }
        
        cout << endl;
    }

    // bottom
    for (int i = 1; i<= n - 1; i++){
        //spaces
        for (int j = i; j< n - 1;j++){
            cout << " ";
        }
        //str
        cout << number;
        number ++;
        //spaces
        for (int j = 1; j <= (2 * i)-1; j++){
            cout << " ";
        }
        cout << number1;
        number1 ++;
        cout << endl;
    }
    
}
