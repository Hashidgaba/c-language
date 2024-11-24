#include <iostream>
using namespace std;
int main(){
    int num = 1;
    int numberOfrows = 5;
    for (int i = 1; i<= numberOfrows; i++){
        //number
        cout << num;
        num++;
        //spaces
        for (int j = 1; j < i; j++){
            cout << " ";
        }
        //number
       if(i != 1){
        cout << num;
        num++;
       }
        cout << endl;
    }
    return 0;

}