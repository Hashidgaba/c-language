#include <iostream>
using namespace std;
// find max element in 2d Array
int main()
{
    int arr[2][2] = {{1, 2}, {1, 4}};
    int max = arr[0][0];
    for (int i = 0; i < 2; i++)
    { // rows
        for (int j = 0; j < 2; j++)
        { // cols
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    cout << "maximum number of that array is: " << max << endl;
    return 0;
}