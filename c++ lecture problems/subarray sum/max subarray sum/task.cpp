#include <iostream>
using namespace std;
//print all subarray 
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)//ending point 
        {
            for (int i = st; i <= end; i++){//print elements of sub array
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}