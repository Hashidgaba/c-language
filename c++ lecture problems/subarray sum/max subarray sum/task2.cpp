#include <iostream>
using namespace std;
//print max subarray sum
int main(){
    int n = 7;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT32_MIN;
    for (int st = 0; st < n; st++){
        int currentSum = 0;
        for (int end = st; end < n ; end++){
            currentSum += arr[end];
           maxSum =  max(currentSum, maxSum);
        }
    }
    cout << "max sum is = " << maxSum;
    return 0;
}