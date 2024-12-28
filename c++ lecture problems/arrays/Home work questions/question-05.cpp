#include <iostream>
using namespace std;
//another mathod to find unique value in the array using Bitwise operator  
int singleNumber(int arr[]){
    int ans  = 0;
    for (int i = 0; i< 5; i++){
        ans^= arr[i];
    }
    return ans;
}
int main(){
    int arr[5] = {4,1,2,2,1};
    cout << singleNumber(arr);
    return 0;

}