#include <iostream>
using namespace std;
    //sum of two nums
    int sumOfTwo(int a, int b){
        // int sum = a + b;
        // return sum;
        cout << a + b;
    }
    //sum of N nums
    int N(int n){
        int sum = 0;
        for (int i = 1 ; i <= n ; i ++){
            sum += i;
        }
        return sum;
    }
    //factorial form
    int factorial(int number){
        
        int product= 1;
        for (int i = 1 ; i <= number ; i++ ){
            product *=i;
        }
        cout << "factorial of a "<< number << " is = " << product << endl;
        return product;
    }

int main(){
    // sumOfTwo(5 ,10);
    // cout << endl;
    // cout << N(3) << endl;
    factorial(4);
    factorial(5);
    factorial(6);
}