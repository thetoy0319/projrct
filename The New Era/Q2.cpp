#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    int emp_id;
    string emp_name;
    string emp_role;
    int emp_age;
    double emp_salary;
    int emp_experience;
    string emp_city;
    string emp_company_name;

    void readEmployeeInfo() {
        cout << "Enter employee ID: ";
        cin >> emp_id;
        cin.ignore();

        cout << "Enter employee name: ";
        getline(cin, emp_name);

        cout << "Enter employee role: ";
        getline(cin, emp_role);

        cout << "Enter employee age: ";
        cin >> emp_age;

        cout << "Enter employee salary: ";
        cin >> emp_salary;

        cout << "Enter employee experience (in years): ";
        cin >> emp_experience;
        cin.ignore();

        cout << "Enter employee city: ";
        getline(cin, emp_city);

        cout << "Enter employee company name: ";
        getline(cin, emp_company_name);
    }

    void displayEmployeeInfo() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee Role: " << emp_role << endl;
        cout << "Employee Age: " << emp_age << endl;
        cout << "Employee Salary: " << emp_salary << endl;
        cout << "Employee Experience: " << emp_experience << " years" << endl;
        cout << "Employee City: " << emp_city << endl;
        cout << "Employee Company Name: " << emp_company_name << endl;
        cout << "---------------------------------------" << endl;
    }
};

int main() {
    Employee employees[5];

    cout << "Enter details for 5 employees:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "\nEnter details for Employee " << i + 1 << ":" << endl;
        employees[i].readEmployeeInfo();
    }

    cout << "\nEmployee Information:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "\nDetails of Employee " << i + 1 << ":" << endl;
        employees[i].displayEmployeeInfo();
    }

    return 0;
}
