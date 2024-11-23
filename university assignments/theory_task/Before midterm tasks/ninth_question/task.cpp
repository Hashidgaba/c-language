#include <iostream>
using namespace std;
int main(){
    char gender;
    cout<<" Enter your Gender: "<<endl;
    cin>>gender;
    
     char city;
     cout<<" Enter your City: "<<endl;
     cin>>city;
     
     cout<<" Enter your age: "<<endl;
     int age;
     cin>>age;
    
     
     
     if(gender == 'f' && age >=25 && age <=35 && (city == 'k' || city == 'H')){
        cout<<" Your salary in 2000 "<<endl;
        cout<<" Net Salary: Rs 1800 "<<endl;
     }
     else if( gender == 'm'&& age >=25 && age<= 40 &&(city == 's'|| city== 'g')){
     	
     	cout<<" Your salary is 2500: "<<endl;
     	cout<<" Net salary 2200 "<<endl;
	 }
    else{
    	cout<< " Present Salary 3000 "<<endl;
	
    }

    return 0;
}