#include <iostream>
#include <algorithm>
using namespace std;
//wihtout using bult in function
int main()
{
    int n = 3;
    int arr1[] = {1,2,4};
    int arr2[] = {4,6,8};
    int result[n * 2];
    for(int i = 0; i < n; i++){
        result[i] = arr1[i];
    }
     for(int i = 0; i < n; i++){
        result[n + i] = arr2[i];
    }
    // sort array in descending order without using any built in func
    for (int i = 0; i < n * 2 ; i++)
    {
        for (int j = i + 1; j < n * 2; j++)
        {
            if (result[i] < result[j])
            {
                // swap two elements
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }
    // print merged array and count frequency of duplicate number
    cout << "Merged array in descending order is: " << endl;
    int count = 0;
    for (int i = 1; i <= n * 2; i++)
    {
        if (result[i] == result[i - 1])
        {
            count++;
        }
        cout << result[i - 1] << " ";
    }
    cout << "\ntotal number of duplicate elements in array is: " << count << endl;
    return 0;
}