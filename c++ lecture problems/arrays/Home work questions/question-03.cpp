#include <iostream>
using namespace std;
//print unique values in array
void printUniquevalues(int arr[], int size){
    for (int i = 0; i< size ; i++){
        bool Isunique  = true;
        for (int j = 0; j < size; j++){
            if(i != j && arr[i] == arr[j]){
                Isunique = false;
            }
        }
        if(Isunique){
            cout << arr[i] << " ";
        }
    }
}
    
int main(){
    int size  = 5;
    int arr[size] = {1,2,3,4,4};
    printUniquevalues(arr, size);
    return 0;
}