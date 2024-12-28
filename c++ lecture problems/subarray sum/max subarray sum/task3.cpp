#include <iostream>
using namespace std;
//print max subarray sum using kadane's algorithm
int main()
{
    int n = 7;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT32_MIN;
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "max sum is " << maxSum << endl;
    return 0;
}