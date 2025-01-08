#include <iostream>
using namespace std;

int main()
{
    int starting;
    int ending;
    int product = 1;
    cout << "enter starting number" << endl;
    cin >> starting;

    cout << "enter Ending number" << endl;
    cin >> ending;

    if(starting < ending){
        for(int i = starting; i <= ending; i++){
            if(i % 2 == 0){
                cout << i << " ";
            }else{
                product *= i;
            }
        }
        cout << "\nproduct of all odd number is: " << product << endl;
    }else{
        for(int i = ending; i <= starting; i++){
            if(i % 2 == 0){
                cout << i << " ";
            }else{
                product *= i;
            }
        }
        cout << "\nproduct of all odd number is: " << product << endl;
    }

    return 0;
}