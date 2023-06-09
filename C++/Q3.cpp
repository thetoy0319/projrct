#include <iostream>

bool isVowel(char c) {
    c = tolower(c); 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    using namespace std;

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch)) {
        if (isVowel(ch)) {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else {
        cout << "Invalid input. Please enter an alphabetic character." << endl;
    }

    return 0;
}
