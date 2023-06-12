#include <iostream>
#include <vector>
using namespace std;

class FastFoodCafe {
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    FastFoodCafe() {
        cafe_id = 0;
        cafe_name = "";
        cafe_type = "";
        cafe_rating = "";
        cafe_location = "";
        cafe_establish_year = 0;
        cafe_staff_quantity = 0;
    }

    void setCafeId(int id) {
        cafe_id = id;
    }

    int getCafeId() {
        return cafe_id;
    }

    void setCafeName(string name) {
        cafe_name = name;
    }

    string getCafeName() {
        return cafe_name;
    }

    void setCafeType(string type) {
        cafe_type = type;
    }

    string getCafeType() {
        return cafe_type;
    }

    void setCafeRating(string rating) {
        cafe_rating = rating;
    }

    string getCafeRating() {
        return cafe_rating;
    }

    void setCafeLocation(string location) {
        cafe_location = location;
    }

    string getCafeLocation() {
        return cafe_location;
    }

    void setCafeEstablishYear(int year) {
        cafe_establish_year = year;
    }

    int getCafeEstablishYear() {
        return cafe_establish_year;
    }

    void setCafeStaffQuantity(int quantity) {
        cafe_staff_quantity = quantity;
    }

    int getCafeStaffQuantity() {
        return cafe_staff_quantity;
    }
};

int main() {
    int N;
    cout << "Enter the number of Fast Food Cafes: ";
    cin >> N;

    vector<FastFoodCafe> cafes;

    for (int i = 0; i < N; i++) {
        cout << "Enter details for Fast Food Cafe " << i + 1 << endl;
        FastFoodCafe cafe;

        int id;
        cout << "Enter Cafe ID: ";
        cin >> id;
        cafe.setCafeId(id);

        string name;
        cout << "Enter Cafe Name: ";
        cin.ignore();
        getline(cin, name);
        cafe.setCafeName(name);

        string type;
        cout << "Enter Cafe Type (e.g., rooftop, normal): ";
        getline(cin, type);
        cafe.setCafeType(type);

        string rating;
        cout << "Enter Cafe Rating (e.g., 1 Star, 2 Star, ..., 5 Star): ";
        getline(cin, rating);
        cafe.setCafeRating(rating);

        string location;
        cout << "Enter Cafe Location (City Name): ";
        getline(cin, location);
        cafe.setCafeLocation(location);

        int establishYear;
        cout << "Enter Cafe Establishment Year: ";
        cin >> establishYear;
        cafe.setCafeEstablishYear(establishYear);

        int staffQuantity;
        cout << "Enter Cafe Staff Quantity: ";
        cin >> staffQuantity;
        cafe.setCafeStaffQuantity(staffQuantity);

        cafes.push_back(cafe);
        cout << endl;
    }

    // Display Fast Food Cafe information
    cout << "Fast Food Cafe Information:" << endl;
    for (const auto& cafe : cafes) {
        cout << "Cafe ID: " << cafe.getCafeId() << endl;
        cout << "Cafe Name: " << cafe.getCafeName() << endl;
        cout
