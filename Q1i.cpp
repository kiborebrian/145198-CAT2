#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2, num3;

    // Get input from the user
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Initialize the smallest variable with the first number
    int smallest = num1;

    // Use switch case to compare and update the smallest variable
    switch (1) {
        case 1:
            if (num2 < smallest) {
                smallest = num2;
            }
            
        case 2:
            if (num3 < smallest) {
                smallest = num3;
            }
            
        default:
            break;
    }

    // Output the smallest number
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
