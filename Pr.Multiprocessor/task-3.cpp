//3. WAP which illustrate the use of Method Overriding concept.
#include<iostream>
using namespace std;

class Animal {
public:
    void makeSound1() {
        cout << "The animal makes a sound.\n";
    }
};

class Cat : public Animal {
public:
    void makeSound2() {
       cout << "The cat says: Meow!\n";
    }
};

class Dog : public Animal {
public:
    void makeSound3() {
       cout << "The dog says: Woof!\n";
    }
};

int main() {
    Cat obj1;
    Dog obj2;
    
    obj1.makeSound2();
    obj2.makeSound3();
    
    return 0;
}


