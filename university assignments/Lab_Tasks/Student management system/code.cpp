#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

vector<string> name;
vector<int> StudentID;
vector<string> department;
int studentCounter = 0;
int searchId;
// declare all function
void addStudent();
void displayAllstudents();
void searchStudent();
void updateStudentdetail();
void removeStudent();
int main()
{
    int choice;

    do
    {
        if (studentCounter > 0)
        {
            cout << "==========managementSystem============" << endl;
            cout << "1. Add Student" << endl;
            cout << "2. Display all students" << endl;
            cout << "3. Search student by Id" << endl;
            cout << "4. Update student Information" << endl;
            cout << "5. Remove student" << endl;
            cout << "6. stop" << endl;

            cout << "choose any option [1-6]" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                addStudent();
                break;

            case 2:
                displayAllstudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudentdetail();
                break;

            case 5:
                removeStudent();
                break;
            case 6:
                cout << "Exit see you soon" << endl;
                break;

            default:
                cout << "please choose valid option" << endl;
                break;
            }
        }
        else
        {
            cout << "Initially you have to enroll first student" << endl;
            addStudent();
        }

    } while (choice != 6);

    return 0;
}

// this function print all enroll students
void displayAllstudents()
{
    if (studentCounter > 0)
    {
        cout << "Total students is: " << studentCounter << endl;

        for (int i = 0; i < name.size(); i++)
        {
            cout << "\nstudent Name: " << name[i] << endl;
            cout << "Student id: " << StudentID[i] << endl;
            cout << "Department is: " << department[i] << endl;
        };
    }
    else
    {
        cout << "please Enroll students" << endl;
        cout << "Now number of student is : " << studentCounter << endl;
    }
};

// this fucntion is use to add new students
void addStudent()
{
    string studentName;
    int id;
    string dep;
    bool idExist = false;
    cout << "Enter student Name" << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer completely
    getline(cin, studentName);

    cout << "Enter student ID" << endl;
    cin >> id;
    for (int i = 0; i < StudentID.size(); i++)
    {
        if (id == StudentID[i])
        {
            cout << id << " is already exist, please enter unique ID" << endl;
            idExist = true;
            break;
        }
    }
    if (idExist == false)
    {
        StudentID.push_back(id);
        cout << "Enter Department" << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer before taking new input
        getline(cin, dep);
        name.push_back(studentName);
        department.push_back(dep);
        cout << "Your information has been saved" << endl;
        cout << "student Name: " << studentName << endl;
        cout << "Student Id: " << id << endl;
        cout << "Department: " << dep << endl;
        studentCounter++;
    }
};
// this function is use to search exixting students
void searchStudent()
{
    cout << "Enter student id" << endl;
    cin >> searchId;
    bool isFound = false;
    for (int i = 0; i < StudentID.size(); i++)
    {
        if (searchId == StudentID[i])
        {
            cout << "Student information" << endl;
            cout << "\nstudent Name: " << name[i] << endl;
            cout << "Student id: " << StudentID[i] << endl;
            cout << "Department is: " << department[i] << endl;
            isFound = true;
        }
    }
    if (isFound == false)
    {
        cout << "invalid ID" << endl;
    }
}
// this function is use to update existing students detail
void updateStudentdetail()
{
    int updatedId;
    string updatedName;
    string updatedDep;
    int indexChange;
    char updatingChoice;
    cout << "Enter student id" << endl;
    cin >> searchId;
    bool found = false;
    for (int i = 0; i < StudentID.size(); i++)
    {
        if (searchId == StudentID[i])
        {
            cout << "your current information is : " << endl;
            cout << "\nstudent Name: " << name[i] << endl;
            cout << "Student id: " << StudentID[i] << endl;
            cout << "Department is: " << department[i] << endl;
            cout << "if you want to change something , so enter 'y' OR 'N" << endl;
            cin >> updatingChoice;
            indexChange = i;
            found = true;
        }
    }

    if (found == false)
    {
        cout << "Invalid Id" << endl;
    }
    else
    {
        if (updatingChoice == 'y' || updatingChoice == 'Y')
        {
            cout << "Enter your new information" << endl;
            cout << "\nEnter your New Id" << endl;
            cin >> updatedId;

            cout << "Enter your Name" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer before taking new input
            getline(cin, updatedName);
            cout << "Enter your department" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer before taking new input
            getline(cin, updatedDep);
            name[indexChange] = updatedName;
            StudentID[indexChange] = updatedId;
            department[indexChange] = updatedDep;
        }
        else
        {
            cout << "thanks for your interest" << endl;
        }
    }
}

void removeStudent()
{
    char remove;
    int indexOfremove;
    cout << "Enter student id" << endl;
    cin >> searchId;
    bool found = false;

    for (int i = 0; i < StudentID.size(); i++)
    {
        if (searchId == StudentID[i])
        {
            found = true;
            cout << "are you sure to remove student ? Enter 'Y' OR 'N'" << endl;
            cin >> remove;
            indexOfremove = i;
            break;
        }
    }

    if (found == false)
    {
        cout << "Invalid id" << endl;
    }
    else
    {
        if (remove == 'Y' || remove == 'y')
        {
            name.erase(name.begin() + indexOfremove);
            StudentID.erase(StudentID.begin() + indexOfremove);
            department.erase(department.begin() + indexOfremove);
            cout << "your information is successfully Remove" << endl;
            studentCounter -= 1;
        }
        else
        {
            cout << "Thanks for your interest" << endl;
        }
    }
}