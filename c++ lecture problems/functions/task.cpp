#include <iostream>
using namespace std;
    //min of two numbers using function
    int min(int a , int b){
        if(a < b){
            cout << a << " is lesser";
            return a;
            }else{
                cout << b << " is lesser";
                return b;
            }
    }
int main(){
   min(12,5);
   return 0;

}