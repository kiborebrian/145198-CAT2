#include <iostream>
using namespace std;

int main() {
    int limit;

    // Input
    cout << "Enter the limit(lower limit is 2) :";
    cin >> limit;

    // Validate the input
    if (limit <= 2 || limit > limit) {
        cout << "Please enter a valid limit not below 2." << endl;
        return 1;  // Exit with an error code
    }

    // Output prime numbers up to the specified limit
    cout << "Prime numbers up to " << limit << ": ";

    for (int i = 2; i <= limit; ++i) {
        bool isPrime = true;

        // Check if i is prime
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        // Print prime numbers
        if (isPrime) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;  // Exit successfully
}


