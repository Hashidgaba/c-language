#include <iostream>
using namespace std;
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i < n; i ++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int sumOfprimeNumber() {
    int sum = 0;
    for(int i = 0; i < 10; i ++){
        if(isPrime(arr[i])){
            sum += arr[i];
        }
    }
    return sum;
};
int main(){
    cout << sumOfprimeNumber();
    return 0;
}