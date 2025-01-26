#include <iostream>
using namespace std;
int main(){
    
    int arr[3][3] = {{1,0,0}, {0,2,0}, {0,0,1}};
    int maxElement = arr[0][0];
    int minElement = arr[0][0];
    bool identity = true;
    int row = 0;
    int col = 0;
    cout << "Matrix is " << endl;
    for(int i = 0 ; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] > maxElement){
                maxElement = arr[i][j];
            }

            if(arr[i][j] < minElement){
                minElement = arr[i][j];
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    if(arr[row][col] == 1 && arr[row + 1][col + 1] == 1 && arr[row + 2][col + 2] == 1){
        for(int i =0; i < 3; i ++){
            for(int j = 0; j < 3; j ++){
                if(arr[i][j] != 1){
                    if(arr[i][j] != 0){
                        identity = false;
                    }
                }
            }
        }
        if(identity){
            cout << "identical matrix" << endl;
        }else{
            cout << "Not identical matrix" << endl;
        }
    }else{
        cout << "Matrix is not identical matrix" << endl;
    }
    cout << "Maximum element in this array is : " << maxElement << endl;
    cout << "Minimum element in this array is : " << minElement << endl;
    return 0;
}