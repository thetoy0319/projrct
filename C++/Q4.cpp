#include <iostream>
#include <cmath>

int main() {
    const int size = 5; // Size of the array
    int numbers[size] = {4, 9, 16, 25, 36}; // Array of numbers

    std::cout << "Square roots of the numbers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        double squareRoot = sqrt(numbers[i]);
        std::cout << "Square root of " << numbers[i] << " is " << squareRoot << std::endl;
    }

    return 0;
}
