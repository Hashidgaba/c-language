#include <iostream>
using namespace std;

int main(){
    // int n = 5;
    // int number = 1;
    // //upper side 
    // for (int i = 0; i< n; i++){
    //     //spaces
    //     for (int j = 0; j < n - i; j++){
    //         cout << " ";
    //     }
    //     //number
    //     cout << number;
    //     number ++;
    //     //spaces
    //     for (int j = 0; j < 2 * i - 1; j++){
    //         cout << " ";
    //     }
    //     //number
    //     if(i != 0){
    //         cout << number;
    //         number ++;
    //     }
    //     cout << endl;
    // }
    // //bottom side
    
    // for (int i = 1; i <= n - 1; i++){
    //     //spaces
    //     for (int j = 1; j <= i; j++ ){
    //         cout << " ";
    //     }
    //     //number 
    //     if (i == 1){
    //         cout << number - 4;
    //         number -= 4;
    //     }else if(i == n - 1){
    //         cout << number - 1;
    //     }
    //     else{
    //         number -= 2;
    //         cout << number;
    //     }
    //     //spaces
    //     for (int j =  2 * i - 1 ; j <= n + 2 ; j++){
    //         if(i != n - 1){
    //             cout << "";
    //         }else{
    //             continue;
    //         }
    //     }

    //     cout << endl;
    // }
    int n = 5;
    int evenNo = 0;
    int oddNo = 1;
    //upper side 
    for (int i = 0; i< n; i++){
        //spaces
        for (int j = i; j < n - 1; j++ ){
            cout << " ";
        }
        //number even
        if (i == 0){
            cout << evenNo + 1;
        }else {
            evenNo += 2;
            cout << evenNo;  
        }
        //spaces
        for (int j = 0; j < 2 * i - 1; j++){
            cout << " ";
        }
        //numebr odd
        if(i != 0){
            oddNo += 2;
            cout << oddNo;
        }
        cout << endl;
    }
    //bottom
    for (int i = 1; i <= n - 1; i++){
        //spaces
        for (int j = 1; j <= i; j++){
            cout << " ";
        }
        //number
        if(i == n - 1){
            cout << evenNo - 1;
        }else{
            evenNo -= 2;
            cout << evenNo;
        }
        //spaces
        for (int j = 2 * i - 1; j<= n; j++){
            cout << " ";
        }
        //odd number
        if(i != n - 1){
            oddNo -= 2;
            cout << oddNo;
        }

        cout << endl;

    }
    return 0;

}