#include <iostream>
using namespace std;
int main(){
   cout<<"Enter Three Integers"<<endl;
   int a , b , c;
   cin>>a;
   cin>>b;
   cin>>c;

   if(a ==b && b==c){
    cout<<"All the integers are equal: "<<endl;
   }
   else{
    cout<<"Integers are not equal: "<<endl;
   }


    return 0;
}