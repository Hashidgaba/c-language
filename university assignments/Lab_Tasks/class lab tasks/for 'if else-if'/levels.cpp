#include <iostream>
using namespace std;
int main(){
    int score;
    cout << "Enter your score" << endl;
    cin >> score;
    if(score >= 97 && score <= 100){
        cout << "----------Gold Medal----------" << endl;
        cout << "you are eligible to archieve gold medal";
    }else if( score >= 85 && score <= 96 ){
        cout << "------------silver medal-----------" << endl;
        cout << "your are eligible to get silver medal" << endl;
    }else if(score < 85){
        cout << "you play good , better luck next time" << endl;
    }else{
        cout << "ops! something wrong, please enter valid scroe" << endl;
    }
    return 0;

}