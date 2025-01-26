#include <iostream>
#include <string>
using namespace std;

struct Student {
    int studentID;
    string studentName;
    float GPA;
    int marks[7];  
};

Student student1 = {101, "John Doe", 3.8, {85, 90, 78, 92, 88, 79, 84}};

void printStudentData(Student s) {
    cout << "Student ID: " << s.studentID << endl;
    cout << "Student Name: " << s.studentName << endl;
    cout << "Student GPA: " << s.GPA << endl;
    cout << "Marks: ";
    for (int i = 0; i < 7; i++) {
        cout << s.marks[i] << " ";
    }
    cout << endl << endl;
}

int main() {
    Student student2 = {102, "Jane Smith", 3.9, {92, 85, 88, 94, 91, 83, 89}};
    
    cout << "Student 1 Data (Global):" << endl;
    printStudentData(student1); 

    cout << "Student 2 Data (Local):" << endl;
    printStudentData(student2);  

    return 0;
}
