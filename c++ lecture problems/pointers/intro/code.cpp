#include <iostream>
using namespace std;
//pointers
//when we want to print address we use & symbol
//when we want to print value of any perticular address we use * symbol before
int main(){
    int n = 10;
    int* ptr = &n;
    int** parPtr = &ptr;
    cout << ptr << endl;//address stored in ptr
    cout << &n << endl;//direct print addres of variable n
    cout << &ptr << endl;
    cout << parPtr << endl;
    //print actual value through address
    cout << *(ptr) << endl;
    cout << ptr << endl;
    cout << *(parPtr) << endl;
    return 0;
}