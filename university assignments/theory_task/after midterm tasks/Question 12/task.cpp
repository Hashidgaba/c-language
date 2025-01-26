#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,6,-7,9};
    int sum;
    int pair1, pair2;
     int closestSum = 1000000;
    for(int i = 0; i < 5;i++){
        for(int j = i + 1; j < 5; j ++){
           sum = arr[i] + arr[j];

            if ((sum < 0 ? -sum : sum) < (closestSum < 0 ? -closestSum : closestSum)) {
                closestSum = sum;
                pair1 = arr[i];
                pair2 = arr[j];
            }
        }   
    }

    cout << "pair of elements whose sum is minimun are:"<< endl;
     cout << "[" << pair1 <<" ,"<< pair2 << "]";
    return 0;
}