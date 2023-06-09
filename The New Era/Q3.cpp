#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    void readCarInfo() {
        cout << "Enter car ID: ";
        cin >> car_id;
        cin.ignore();

        cout << "Enter car company name: ";
        getline(cin, car_company_name);

        cout << "Enter car color: ";
        getline(cin, car_color);

        cout << "Enter car model: ";
        getline(cin, car_model);

        cout << "Enter car release year: ";
        cin >> car_release_year;
        cin.ignore();
    }

    void displayCarInfo() {
        cout << "Car ID: " << car_id << endl;
        cout << "Car Company Name: " << car_company_name << endl;
        cout << "Car Color: " << car_color << endl;
        cout << "Car Model: " << car_model << endl;
        cout << "Car Release Year: " << car_release_year << endl;
        cout << "---------------------------------------" << endl;
    }
};

int main() {
    Car cars[4];

    cout << "Enter details for 4 cars:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "\nEnter details for Car " << i + 1 << ":" << endl;
        cars[i].readCarInfo();
    }

    cout << "\nCar Information:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "\nDetails of Car " << i + 1 << ":" << endl;
        cars[i].displayCarInfo();
    }

    return 0;
}
