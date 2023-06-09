#include <iostream>
#include <string>

using namespace std;

class Customer {
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_telecome_brand_name;
    string cust_mobile_number;
    string cust_city;
    int cust_simcard_validity;

public:
    void setCustomerInfo(int id, const string& name, int age, const string& brand_name, const string& mobile_number, const string& city, int simcard_validity) {
        cust_id = id;
        cust_name = name;
        cust_age = age;
        cust_telecome_brand_name = brand_name;
        cust_mobile_number = mobile_number;
        cust_city = city;
        cust_simcard_validity = simcard_validity;
    }

    void displayCustomerInfo() {
        cout << "Customer ID: " << cust_id << endl;
        cout << "Customer Name: " << cust_name << endl;
        cout << "Customer Age: " << cust_age << endl;
        cout << "Telecom Brand Name: " << cust_telecome_brand_name << endl;
        cout << "Mobile Number: " << cust_mobile_number << endl;
        cout << "Customer City: " << cust_city << endl;
        cout << "SIM Card Validity: " << cust_simcard_validity << " years" << endl;
        cout << "---------------------------------------" << endl;
    }
};

int main() {
    Customer customers[5];

    cout << "Enter details for 5 customers:" << endl;
    for (int i = 0; i < 5; ++i) {
        int id, age, simcard_validity;
        string name, brand_name, mobile_number, city;

        cout << "\nEnter details for Customer " << i + 1 << ":" << endl;

        cout << "Enter customer ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter customer name: ";
        getline(cin, name);

        cout << "Enter customer age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter telecom brand name: ";
        getline(cin, brand_name);

        cout << "Enter mobile number: ";
        getline(cin, mobile_number);

        cout << "Enter customer city: ";
        getline(cin, city);

        cout << "Enter SIM card validity (in years): ";
        cin >> simcard_validity;
        cin.ignore();

        customers[i].setCustomerInfo(id, name, age, brand_name, mobile_number, city, simcard_validity);
    }

    cout << "\nCustomer Information:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "\nDetails of Customer " << i + 1 << ":" << endl;
        customers[i].displayCustomerInfo();
    }

    return 0;
}
