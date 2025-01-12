#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int arr1[n] = {4, 12, 15};
    int arr2[n];
    int sum = 0;
   
    cout << "The elements stored in the  first array are: "<< endl;
    for(int i = 0; i < n; i++){
        cout << arr1[i] << " ";
        arr2[i] = arr1[i];
    }
    cout << endl;

    cout << "The elements stored in the second array are: "<< endl;
    for(int i = 0; i < n; i++){
        cout << arr2[i] << " ";
        if(arr2[i] % 2 == 0){
            sum += arr2[i];
        }
    }
    cout<< "\nThe sum of all even number is: " << sum;
    return 0;
}