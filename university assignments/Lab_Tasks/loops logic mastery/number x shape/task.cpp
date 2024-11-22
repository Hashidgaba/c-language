#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i<= n - 2; i++){
        //spaces
        for (int j = 1; j < i; j++){
            cout << " ";
        }
        //number
        cout << i;
        //spaces
        for (int j = (2 * i)-1; j <= n - 2; j++){
            cout << " ";
        }
        if(i != n - 2){
            cout << i;
        }
        cout << endl;


    }
    return 0;
}