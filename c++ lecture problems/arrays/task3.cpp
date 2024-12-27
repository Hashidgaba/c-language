#include <iostream>
using namespace std;
//reverse an array
void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // for (start = 0; start< end; start++){
    //     swap(arr[start], arr[end]);
    //     end--;
    // }
}
int main(){
    int size = 9;
    int arr [size] = {1,2,3,4,5,6,7,8,9};
    reverseArray(arr, size);
    for (int i = 0 ;i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;

}