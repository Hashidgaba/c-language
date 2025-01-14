#include  <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1,2,6,7,8};
    arr[n] = 25;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j <=n; j++){
            if(arr[i] < arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }   
    cout << "Merged array in descending order is: "<< endl;
    for(int i = 0; i < n+1; i++){
        cout << arr[i] << " ";
    }
    return 0;
}