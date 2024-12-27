#include <iostream>
using namespace std;
//calculate sum and product of array
void operations(int arr[], int sz){
    int sum = 0;
    int product = 1;
    for (int i = 0; i< sz; i++){
        sum += arr[i];
        product*= arr[i];
    }
    cout << "sum of all numbers in array is " << sum << endl;
    cout << "product of all numbers in array is " << product << endl;
}
int main(){
    int sz = 5;
    int arr[sz] = {1,2,3,4,5};
    operations(arr, sz);
    return 0;
}