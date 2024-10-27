#include <iostream>
using namespace std;

int main(){
    string student;

    cout << "Enter your name: ";
    cin >> student; 

    int Maths ;
    float English ;
    int urdu;
    
    cout << "enter your maths marks: " << endl;
    cin >>Maths;

    cout << "Enter your english marks; " << endl;
    cin >> English;

    cout << "Enter your urdu marks: " <<endl;
    cin >> urdu;


    cout << "\nHere your marks is: "<< endl << "Maths = "<< Maths << endl << "English = " << English << endl << "Urdu = " << urdu << endl;
    int avg = Maths + English + urdu;
    cout << "average will be: " << endl << avg/3;


    return 0;
    
}