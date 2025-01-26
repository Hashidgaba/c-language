#include <iostream>
using namespace std;

int main()
{
    int arr1[2][2] = {{1, 3}, {1, 2}};
    int arr2[2][2] = {{1, 2}, {1, 2}};
    int orderArr1 = 0;
    int orderArr2 = 0;
    bool isEqual = true;
    cout << "Elements of first matrix: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr1[i][j] << " ";
            orderArr1++;
        }

        cout << endl;
    }

    cout << "\nElements of second matrix: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr2[i][j] << " ";
            orderArr2++;
        }

        cout << endl;
    }

    // if order same then matrix can be add
    if (orderArr1 == orderArr2)
    {
        cout << "Addition of two matrices will be: " << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << arr1[i][j] + arr2[i][j] << " ";
                if (arr1[i][j] != arr2[i][j])
                {
                    isEqual = false;
                }
            }
            cout << endl;
        }
        if(isEqual){
            cout << "Martices are equal" << endl;

        }else{
            cout << "two matrix are not equal" << endl;
        }
    }
    else
    {
        cout << "Matrix can not be add becaues: " << endl;
        cout << "order of first matrix is " << orderArr1 << endl;
        cout << "order of second matrix will be " << orderArr2 << endl;
        cout << "matrices are not equal" << endl;
        
    }
    return 0;
}