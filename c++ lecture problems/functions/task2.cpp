#include <iostream>
using namespace std;
    //sum of n numbers usingfunction
    int sumOfnumber(int n){
        int sum = 0;
        for (int i = 1 ; i <= n ; i++){
            sum += i;
        }
        cout << "sum of a " << n << " is = "<< sum << endl;
        return sum;
    }
    

int main(){
    sumOfnumber(5);
    sumOfnumber(10);
    sumOfnumber(14);
    sumOfnumber(2);
    sumOfnumber(7);
   return 0;

}