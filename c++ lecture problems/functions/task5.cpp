#include <iostream>
using namespace std;
//bionomial cofficient
int factorialOfnumber(int n){
    int product = 1;
    for (int i = 1 ; i <= n; i++){
        product*= i;

    }
    return product;

}

int nCr(int n, int r){
    int factorialOfn = factorialOfnumber(n);
    int factorialOfr = factorialOfnumber(r);
    int factorialofn_r = factorialOfnumber(n - r);
    return factorialOfn / (factorialOfr * factorialofn_r);
}
int main(){
    cout << nCr(8 , 2);

    return 0;

}