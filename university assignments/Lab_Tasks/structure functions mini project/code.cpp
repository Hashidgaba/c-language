#include <iostream>
using namespace std;
struct studentData
{
    char name[10];
    int rollNumber;
    int marks[3];
};
studentData student[3];
int indexOfstudent = 0;
bool isEnroll = false;
void addStudent();
void displayStudent();
void totalMarks();
int main()
{
    int choice;
    cout << "student Report System" << endl;
    cout << "1.Add Student" << endl;
    cout << "2.Display students" << endl;
    cout << "3.total marks" << endl;
    cout << "4.Exit" << endl;

    do
    {
        cout << "Please select any option 1 to 4" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudent();
            break;
        case 3:
            totalMarks();
            break;
        case 4:
            cout << "Exit";
            break;

        default:
            cout << "invlid option" << endl;
            break;
        }
    } while (choice != 4);
    return 0;
}

void addStudent(){
    cout << "Enter Student Name" << endl;
    cin >> student[indexOfstudent].name;

    cout << "Enter Student Roll number" << endl;
    cin >> student[indexOfstudent].rollNumber;
    cout << "Enter your subject marks" << endl;
    for(int i = 0; i < 3 ; i++){
        cin >> student[indexOfstudent].marks[i];
    }
    isEnroll = true;
    indexOfstudent ++;
}
//print enroll students details
void displayStudent(){
    if(isEnroll == true){
        cout << "Total Enroll Students: "<< indexOfstudent << endl;
        for(int i = 0; i < indexOfstudent; i++){
            int sum = 0;
            cout << "\nName: " << student[i].name << endl;
            cout << "Roll Number" << student[i].rollNumber << endl;
            cout << "Marks of the student: " << i + 1 << endl;
            for(int j = 0; j < 3; j++){
               cout << "marks of the subject " << j + 1 << ": " << student[i].marks[j] << endl;
               sum += student[i].marks[j];
            }
            cout << "Total marks is " << sum << endl;
        }
    }else{
        cout << "please Enroll any student" << endl;
    }
};

void totalMarks(){
    if(isEnroll == true){
        for(int i = 0; i < indexOfstudent; i++){
            int sum = 0;
            cout << "Marks of the student: " << i + 1 << endl;
            for(int j = 0; j < 3; j++){
               cout << "marks of the subject " << j + 1 << ": " << student[i].marks[j] << endl;
               sum += student[i].marks[j];
            }
            cout << "Total marks is " << sum << endl;
        }
    }else{
        cout << "please enroll any students" << endl;
    }
     
};