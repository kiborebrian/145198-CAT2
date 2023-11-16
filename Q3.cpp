#include <iostream>
using namespace std;

int main() {
    string username = "briankibore"; //stored username
    string password = "bbit2023"; //stored password

    string input_username, input_password;
    bool loggedIn = false;

    do {
        cout << "Enter username: ";
        cin >> input_username;

        cout << "Enter password: ";
        cin >> input_password;

        if (input_username == username && input_password == password) {
            loggedIn = true;
            cout << "Login successful. Welcome to my Simple App!" << endl;

            int choice;//shows choices available
            do {
                cout << "\nSelect an action to perform:\n"
                        "1. Go to About Us Page\n"
                        "2. Go to Services Page\n"
                        "3. Go to Full Profile Page\n"
                        "4. Logout\n"
                        "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                    case 1:
                        cout << "\nAbout Us:\n";
                        cout << "I enjoy learning the depths of C++ programming.\n";
                        break;

                    case 2:
                        cout << "\nServices Offered:\n";
                        cout << "I can help others with programming to earn money.\n";
                        break;

                    case 3:
                        cout << "\nFull Profile:\n";
                        // Display your full profile information here
                        cout << "Full Name: Brian Kibore\n"
                                "Year of Birth: 2010\n"
                                "Country: Zimbabwe\n"
                                "City: Nairobi\n"
                                "University: Strathmore University\n"
                                "Course: BBIT\n"
                                "Unit Name: Introduction to Programming\n"
                                "Hobbies: Reading\n";
                        break;

                    case 4:
                        cout << "Logout successful.\n";
                        break;

                    default:
                        cout << "Invalid choice. Please enter a number between 1 and 4.\n";
                }
            } while (choice != 4);

            break;
        } else {
            cout << "Invalid username or password. Please try again.\n";
        }
    } while (!loggedIn);

return 0;
}