#include <iostream>
using namespace std;
int main(){
     int num;

    int evenNum = 0;
    int oddnum = 0;

    while (true){
        cout << " Enter Num " <<endl;

          cin >> num ;

          if ( num == 0 ){
            break;
          }

          if ( num % 2 == 0 ){
            evenNum ++ ;
          }else{
            oddnum ++ ;
          }

    }
    cout << " Total Even Num: " << evenNum << endl;
    cout << " Tota odd Num: " << oddnum << endl ;
    
    return 0;


}