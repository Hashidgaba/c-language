#include <iostream>
#include <string>
using namespace std;
int main(){
    string monthName;
    cout << "enter Month Name , enter just first 3 letters in lowercase" <<endl;
    cin >> monthName;
    if(monthName == "jan" || monthName == "feb" || monthName == "dec" ||  monthName == "nov" ){
        cout << monthName << " is in winter season" <<endl;

    }else if (monthName == "jul" || monthName == "jun" ||  monthName == "aug" || monthName == "sep" || monthName == "oct"){
        cout << monthName << " is in summer season" << endl;
    }else if (monthName == "mar" || monthName == "apr" || monthName == "may"){
        cout << monthName << " is in spring season" << endl;
    }else{
        cout << "invalid monthname ,enter correct name in lowercase" << endl;
    }
    return 0;

}