//2. WAP to create a class that contains four member functions, with 0, 1, 2, and 3 int arguments, respectively.
// Create a main( ) that makes an object of your class and calls each of the member functions

#include <iostream>
using namespace std;

class MyClass{
public:
    void fun0() {
        cout << "Function with 0 arguments called." <<endl;
    }

    void fun1(int arg1) {
        cout << "Function with 1 argument called. Argument: " << arg1 <<endl;
    }

    void fun2(int arg1, int arg2) {
        cout << "Function with 2 arguments called. Arguments: " << arg1 << ", " << arg2 <<endl;
    }

    void fun3(int arg1, int arg2, int arg3) {
        cout << "Function with 3 arguments called. Arguments: " << arg1 << ", " << arg2 << ", " << arg3 <<endl;
    }
};

int main() {
    MyClass obj;

    obj.fun0();
    obj.fun1(10);
    obj.fun2(20, 30);
    obj.fun3(40, 50, 60);

    return 0;
}
