#include <iostream>
using namespace std;
//pass by ref using pointers
// void changeValue(int* num){
//     *num = 40; 
// }
//pass by ref using alias
void changeValue(int &num){//& indicate another variable with same address
    num = 40;
}
int main(){
    int n = 10;
    // changeValue(&n);// pass address
    changeValue(n);
    cout << "change value inside main function:" << n << endl;
    return 0;
}