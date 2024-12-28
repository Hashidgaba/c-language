#include <iostream>
using namespace std;
void intersectionOftwoArrays(int arr1[], int arr2[])
{
    for (int i = 0; i < 5; i++)
    {
        bool Iscommon = true;
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i] == arr2[j])
            {
                Iscommon = false;
            }
        }
        if (!Iscommon)
        {
            cout << arr1[i] << " ";
        }
    }
}
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {2, 5, 6, 7, 4};
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << "\ncommon elements of both array is: " << endl;
    intersectionOftwoArrays(arr1, arr2);
    return 0;
}
