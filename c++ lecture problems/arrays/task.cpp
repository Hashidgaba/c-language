#include <iostream>
using namespace std;
int main(){
    //find smallest value in the array
    int number [] = {45,6,-8,-7, 96};
    int size = 5;
    int indexOflargest = 0;
    int indexOfsmallest = 0;
    int largest = INT32_MIN;
    int smallest = INT32_MAX;
    for(int i = 0; i < size ; i++){
        if(number[i] > largest){
            largest = number[i];
            indexOflargest = i;
        }
        if(number [i] < smallest){
            smallest = number [i];
            indexOfsmallest = i;
        }
    }
    cout << "index of largest number is = " << indexOflargest << endl;
    cout << "largest = " << largest << endl;
    cout << "index of smallest number is = " << indexOfsmallest << endl;
    cout << "smallest = " << smallest << endl;



    return 0;
}