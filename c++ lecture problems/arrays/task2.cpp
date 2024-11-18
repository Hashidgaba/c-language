#include <iostream>
#include <algorithm> // For std::swap
using namespace std;

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    // Swap elements until the middle
    while (start < end) {
        swap(arr[start], arr[end]); // Swap elements
        start++;
        end--;
    }
}

int main(){
    //find reverse an array
    int arr [] = {2,4,8,16,32};
    int size  = 5;
    reverseArray(arr, size);
    for (int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}