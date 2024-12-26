#include <iostream>
using namespace std;
    //sum of n numbers using function
    int sumOfnumber(int n){
        int sum = 0;
        for (int i = 1 ; i <= n ; i++){
            sum += i;
        }
        // cout << "sum of a " << n << " is = "<< sum << endl;
        return sum;
    }
    

int main(){
    int sum;
    sum = sumOfnumber(5);
    cout << "Sum of the 5 is " <<sum; 
   return 0;

}