#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_email;
    string stu_city;
    string stu_college;

public:
    void setStudentInfo(int id, const string& name, int age, const string& course, const string& email, const string& city, const string& college) {
        stu_id = id;
        stu_name = name;
        stu_age = age;
        stu_course = course;
        stu_email = email;
        stu_city = city;
        stu_college = college;
    }

    void displayStudentInfo() {
        cout << "Student ID: " << stu_id << endl;
        cout << "Student Name: " << stu_name << endl;
        cout << "Student Age: " << stu_age << endl;
        cout << "Student Course: " << stu_course << endl;
        cout << "Student Email: " << stu_email << endl;
        cout << "Student City: " << stu_city << endl;
        cout << "Student College: " << stu_college << endl;
        cout << "---------------------------------------" << endl;
    }
};

int main() {
    Student students[5];

    cout << "Enter details for 5 students:" << endl;
    for (int i = 0; i < 5; ++i) {
        int id, age;
        string name, course, email, city, college;

        cout << "\nEnter details for Student " << i + 1 << ":" << endl;

        cout << "Enter student ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter student age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter student course: ";
        getline(cin, course);

        cout << "Enter student email: ";
        getline(cin, email);

        cout << "Enter student city: ";
        getline(cin, city);

        cout << "Enter student college: ";
        getline(cin, college);

        students[i].setStudentInfo(id, name, age, course, email, city, college);
    }

    cout << "\nStudent Information:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "\nDetails of Student " << i + 1 << ":" << endl;
        students[i].displayStudentInfo();
    }

    return 0;
}
