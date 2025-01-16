#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int n = 3;
   int arr[n + 1] = {1,2,5};
   arr[n] = 45;

    // Sorting logic
    for (int i = 0; i < n + 1; i++) {
        for (int j = i + 1; j < n + 1; j++) { // Loop bounds correct kiye
            if (arr[i] < arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }

    // Sorted array print karna
    cout << "Merged array in descending order is: " << endl;
    for (int i = 0; i < n + 1; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
