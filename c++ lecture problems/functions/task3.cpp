#include <iostream>
using namespace std;
    //factorial of a number using function
    int factorialOfnumber(int n){
        int product = 1;
        for (int i = 1 ; i <= n; i++){
            product*=i;
        }
        cout << "factorial form of a " << n << " is = " << product<<endl;
        return product;

    }

int main(){
    factorialOfnumber(4);

   return 0;

}