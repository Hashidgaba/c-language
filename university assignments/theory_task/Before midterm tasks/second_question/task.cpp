#include <iostream>
using namespace std;

int main() {
	//variables
    
    double miles;
    cout << "Enter distance from SHU to your home (in miles): ";
    cin >> miles;

    
      
      //conversions
    float kilometers = miles * 1.60934;
    float meters = miles * 1609.34;
    float centimeters = miles * 160934;
    float millimeters = miles * 1609340;
    double micrometers = miles * 1609340000;

//printing
    cout << "\nResults:" << endl;
    cout<<miles<< " miles = " << kilometers << " kilometers" << endl;
    cout<<miles<< " miles = " << meters << " meters" << endl;
    cout<<miles<< " miles = " << centimeters << " centimeters" << endl;
    cout<<miles<< " miles = " << millimeters << " millimeters" << endl;
    cout<<miles<< " miles = " << micrometers << " micrometers" << endl;

    return 0;
}