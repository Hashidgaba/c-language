#include <iostream>
using namespace std;
//swap smallest and largest value in the  array
void swapSmallestandLargest(int arr[]){
    int smallest = INT32_MAX;
    int largest = INT32_MIN;
    int indexOfsmallest = 0;
    int indexOflargest = 0;
    for (int i = 0; i< 5;i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            indexOfsmallest = i;
        }
        if(arr[i] > largest){
            largest = arr[i];
            indexOflargest = i;
        }
    }
    
    swap(arr[indexOfsmallest], arr[indexOflargest]);
    cout << "\nsmallest is " << smallest << endl;
    cout << "largest is " << largest << endl;
}
int main(){
    int arr [5] = {2,4,6,1,9};
    cout << "Elements of array is: " << endl;
    for (int i = 0; i< 5; i++){
        cout << arr[i] << " ";
    }

    swapSmallestandLargest(arr);
     cout << "Reverse smallest and largest" << endl;
     for (int i = 0; i< 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}