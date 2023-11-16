#include <iostream>
#include <cctype> // for tolower and isalpha functions

using namespace std;

int main() {
    char inputChar;

    // Input
    cout << "Enter a character: ";
    cin >> inputChar;

    // Convert to lowercase using tolower
    char lowercaseChar = tolower(inputChar);

    // Check if the character is a letter using isalpha
    if (!isalpha(inputChar)) {
        cout << "Error: You have not input a letter!" << endl;
    } else {
        // Check if the character is a vowel or a consonant
        switch (lowercaseChar) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << "The character '" << inputChar << "' is a vowel." << endl;
                break;
            default:
                cout << "The character '" << inputChar << "' is a consonant." << endl;
                break;
        }
    }

    return 0;
}
