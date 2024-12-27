#include <iostream>
#include <math.h>
using namespace std;
int main(){
    // print index of smallest and largest value in the array
    int arr[5] = {1,2,3,4,5};
    int indexOfsmallest = 0;
    int indexOflargest = 0;
    int smallest = INT32_MAX;
    int largest = INT32_MIN;
    for (int i = 0; i< 5; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            indexOfsmallest = i;
        }
        if(arr[i] > largest){
            largest = arr[i];
            indexOflargest = i;
        }
    }
    cout << "Elements of an array is " << endl;
    for (int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << "\nindex of smallest is " << indexOfsmallest << endl;
    cout << "index of largest is " << indexOflargest << endl;

    return 0;
}