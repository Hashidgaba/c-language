#include <iostream>
using namespace std;
int main(){
    int hour;
    cout << "Enter any hour from 0 to 24" << endl;
    cin >> hour;
    if(hour >= 4 && hour <= 8){
        cout << "Morning" << endl;
    }else if (hour > 8 && hour <= 15){
        cout << "Afternoon" << endl;
    }else if ( hour > 15 && hour <=19){
        cout << "Evening" << endl;
    }else if ( hour > 19 || hour < 3){
        cout << "Night" << endl;
    }
    return 0;

}