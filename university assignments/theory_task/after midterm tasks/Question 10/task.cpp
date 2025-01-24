#include <iostream>
using namespace std;

int main()
{
    int arr1[2][2];
    int arr2[2][2];
    bool isEqual = true;
    cout << "input elements in first array" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "input element: " << endl;
            cin >> arr1[i][j];
        }
    }

    cout << "input elements in second array:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "input element: " << endl;
            cin >> arr2[i][j];
        }
    }
    //additio of two matrices
    cout << "Addition of two matrices" << endl;
      for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
    //check matrices are equal or not
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                isEqual = false;
            }
        }
    }

    if (isEqual)
    {
        cout << "matrices are equal" << endl;
    }
    else
    {
        cout << "Matrices are not equal" << endl;
    }

    return 0;
}