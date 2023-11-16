#include <iostream>

using namespace std;

int main() {
    int year;

    // Input
    cout << "Enter a year: ";
    cin >> year;

    // Check if it's a leap year
  
    if (year % 4 == 0 ) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
      

     // It is a leap year if the year is divisible by 4 otherwise it is not a leap year.

    return 0;
}