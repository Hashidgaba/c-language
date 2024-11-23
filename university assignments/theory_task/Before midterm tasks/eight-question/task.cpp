#include <iostream>
using namespace std;
int main(){
cout<<" Enter your subject marks: "<<endl;
int marks;
cin>>marks;

if(marks >= 90 ){
    cout<<"Congralutions: Your Grade is A+ "<<endl;
}
else if(marks >= 70) {
    cout<<"Your Grade is A "<<endl;
}
else if(marks >= 51 ){
    cout<<"Your Grade is B "<<endl;

}
else if (marks < 50){
    cout<<"Your Grade is F "<<endl;
}
 else if(marks>100){
    cout<<"Invalid marks enter marks between 0 to 100 "<<endl;
}
else{
    cout<<"Invalid marks "<<endl;
}
    
    return 0;
}