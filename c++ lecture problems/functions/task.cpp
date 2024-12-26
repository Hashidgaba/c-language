#include <iostream>
using namespace std;
// min of two numbers using function
void min(int a, int b)
{
    if (a < b)
    {
        cout << a << " is lesser";
        
    }
    else
    {
        cout << b << " is lesser";
    }
}
int main()
{
    int a , b;
    cout << "Enter any number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    min(a, b);
    return 0;
}