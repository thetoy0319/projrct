//6. WAP to add two distances using binary plus (+) operator overloading.
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() : feet(0), inches(0.0) {}

    Distance(int ft, float in) : feet(ft), inches(in) {}

    Distance operator+(const Distance& d) {
        int ft = feet + d.feet;
        float in = inches + d.inches;
        
        if (in >= 12.0) {
            in -= 12.0;
            ft++;
        }
        
        return Distance(ft, in);
    }

    void display() {
        cout << "Feet: " << feet; 
		cout << " Inches: " << inches <<endl;
    }
};

int main() {
    Distance d1(5, 10);
    Distance d2(3, 2);

    Distance sum = d1 + d2;

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    cout << "Sum: ";
    sum.display();

    return 0;
}

