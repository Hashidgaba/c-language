#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 3;
    int arr[n + 1] = {1, 2, 5};
    arr[n] = 45;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = i + 1; j < n + 1; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
        }
    }

    // Sorted array print karna
    cout << "Merged array in descending order is: " << endl;
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
