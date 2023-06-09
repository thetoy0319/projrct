#include <iostream>

int main() {
    const int size = 5; 
    int numbers[size] = {2, 3, 4, 5, 6}; 
    int cubes[size]; 

    
    for (int i = 0; i < size; ++i) {
        cubes[i] = numbers[i] * numbers[i] * numbers[i];
    }

   
    std::cout << "Cubes of the given numbers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Cube of " << numbers[i] << " is " << cubes[i] << std::endl;
    }

    return 0;
}
