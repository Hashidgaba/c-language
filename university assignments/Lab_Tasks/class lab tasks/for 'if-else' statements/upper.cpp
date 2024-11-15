#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter any character which you want to check if a character is in uppercase or lowercase" << endl;
    cin >> ch;
    if(ch > 64 && ch < 95) {
        cout << "you entered " << ch << " in uppercase" << endl;

    }else{
        cout << "you entered " << ch << " in lowercase" << endl;
        
    }
    return 0;

}