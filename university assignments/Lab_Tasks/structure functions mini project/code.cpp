#include <iostream>
#include <vector>
using namespace std;
struct studentsData
{
    char name[10];
    int rollNumber;
    int marks[3];
};
bool isStudentEnroll = false;
int indxOfstudent = 0;
studentsData student[3];
void displayStudents();
void totalMarks();
void addStudent();

int main()
{
    int choice;
    cout << "Student Report System" << endl;
    cout << "1. Add student details" << endl;
    cout << "2. Display students detail" << endl;
    cout << "3. Total marks of the student" << endl;
    cout << "4. Exit";
    do
    {
        cout << "choose any option from 1 to 4" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            totalMarks();
            break;
        case 4:
            cout << "thank you so much see you soon" << endl;
            break;
        default:
            cout << "please Enter valid option" << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
void addStudent()
{
    
    cout << "Enter student detail" << endl;
    cout << "Enter student Name" << endl;
    cin >> student[indxOfstudent].name;
    cout << "Enter student Roll number" << endl;
    cin >> student[indxOfstudent].rollNumber;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter your marks subject " << i + 1 << endl;
        cin >> student[i].marks[i];
    }
    isStudentEnroll = true;
    indxOfstudent++;
    cout << "YOUR DETAILS HAVE BEEN SAVED" << endl;
   
}
void totalMarks(){
    cout << "marks";
}
void displayStudents()
{
    if (isStudentEnroll == true)
    {
        
        cout << "Total Students Enroll is " << indxOfstudent<< endl;
        cout << "your information is : " << endl;
        for (int i = 0; i < indxOfstudent; i++)
        {
            int sum = 0;
            cout << "\nName: " << student[i].name << endl;
            cout << "Roll Number" << student[i].rollNumber << endl;
            cout << "Your subject marks is " << endl;
            for (int j = 0; j < 3; j++)
            {
                cout << "subject" << j + 1 << ": " << student[i].marks[i] << endl;
                sum += student[i].marks[i];
            }
            cout << "total marks: " << sum << endl;
        }
    }
    else
    {
        cout << "PLease Enroll any students first" << endl;
    }
};