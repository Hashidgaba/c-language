#include <iostream>
#include <string>
using namespace std;

struct Student {
    int studentID;
    string studentName;
    float GPA;
    float percentage;
    int marks[5];  
};

int calculateTotalMarks(Student &s) {
    cout << "Enter Student ID: ";
    cin >> s.studentID;
    cin.ignore();  

    cout << "Enter Student Name: ";
    getline(cin, s.studentName);

    cout << "Enter Student GPA: ";
    cin >> s.GPA;

    cout << "Enter Student Percentage: ";
    cin >> s.percentage;

    cout << "Enter 5 marks of the student: ";
    int total = 0;
    for (int i = 0; i < 5; i++) {
        cin >> s.marks[i];
        total += s.marks[i];  
    }

    return total;  
}

int main() {
    Student student;  
    int totalMarks = calculateTotalMarks(student); 

   
    cout << "\nTotal Marks of Student " << student.studentName << " (ID: " 
         << student.studentID << "): " << totalMarks << endl;

    return 0;
}
