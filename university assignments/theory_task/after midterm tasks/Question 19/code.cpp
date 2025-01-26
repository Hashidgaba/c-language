#include <iostream>
using namespace std;

void table(int n){
    for(int i = 1; i <= 10; i ++){
        cout << i << " * " << n << " = " << i * n << endl;
    }
}
void tableOfEachnumber(){
    int arr[5];

    for(int i = 0; i < 5; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "original array is: ";
    for(int i = 0; i < 5; i ++){
        cout << arr[i] << " ";
    }
    cout << "\n==================table of Each element in this Array ========================="<< endl;
    for (int i = 0; i < 5; i ++){
        cout << "Table of " << arr[i] << endl;
        table(arr[i]);
    }

}
int main(){
    tableOfEachnumber();
    return 0;
}