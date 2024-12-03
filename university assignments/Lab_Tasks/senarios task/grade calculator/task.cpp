#include <iostream>
#include <string>
using namespace std;
int main()
{
    string choice ;
    int marks;
    cout << "\nEnter your marks [0 100] To calulate Grade: " << endl;
    
    do
    {
        cin >> marks;
        if (marks == 5)
        {
            break;
        }

        if (marks >= 90 && marks <= 100)
        {
            cout << "Grade  A: " << endl;
        }
        else if (marks >= 80 && marks <= 89)
        {
            cout << "Grade B: " << endl;
        }
        else if (marks >= 70 && marks <= 79)
        {
            cout << "Grade C: " << endl;
        }
        else if (marks >= 60 && marks <= 69)
        {
            cout << " Grade D: " << endl;
        }else if(marks > 100){
            cout << "please inter valid marks" << endl;
        }
        else
        {
            cout << "Fail " << endl;
        }

    } while (marks != 5);
    cout << "Bye......... " << endl;

    return 0;
}