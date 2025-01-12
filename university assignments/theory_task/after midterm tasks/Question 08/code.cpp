#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 3;
    int array1[n * 2] = {1,2,3};
    int array2[] = {2,4,5};
    for(int i = 0; i < n; i++){
        array1[n + i] = array2[i];
    }
    //using bultin function
    sort(array1, array1 + n*2, greater <int>());
    //print merged array and count frequency of duplicate number
    cout<< "Merged array in descending order is: "<< endl;
    int count = 0;
    for(int i = 1; i <= n * 2 ; i ++){
        if(array1[i] == array1[i - 1]){
            count ++;
        }
        cout << array1[i - 1] << " ";
    }
    cout << "\ntotal number of duplicate number is: " << count << endl;
    return 0;
}