#include <iostream>
#include <string>
using namespace std;\

int main() {
    string userFirstName;
    string userLastName;
    int i = 0;
    
    cout << "Enter your first name: (<10 chars): ";
    cin >> userFirstName;
    
    if (userFirstName.size() > 10) {
        cout << "WARNING: You have entered a name that is too large." << endl;
        cout << "We will shorten that to the first 10 letters you provided." << endl << endl;
    }
    
    cout << "Your first name has been recorded." << endl;
    cout << "Enter your last name: (<20 chars): ";
    cin >> userLastName;
    
    if (userLastName.size() > 20) {
        cout << "WARNING: You have entered a name that is too large." << endl;
        cout << "We will shorten that to the first 20 letters you provided." << endl << endl;
    }
    
    cout << "Your last name has been recorded." << endl;
    
    if(userFirstName.substr(0, 10) == userLastName.substr(0, 10)) {
        cout << "WARNING: You have input the same name twice, if this is a mistake please start over." << endl;
    }
    
    while (i < 10) { // Print each char
        if (isupper(userFirstName[i])) {
            userFirstName[i] = tolower(userFirstName[i]);
        }
        ++i;
    }
    for (int j = 0; j < 20; ++j) { // Print each char
        if (isupper(userLastName[j])) {
            userLastName[j] = tolower(userLastName[j]);
        }
    }
    
    userFirstName = userFirstName.substr(0, 10);
    userLastName = userLastName.substr(0, 20);
    cout << "Name: " << userFirstName << " " << userLastName << endl;
    cout << "Which of the three user names would you like: " << endl << endl;
    cout << userFirstName.substr(0, 2) << userLastName << endl;
    cout << userFirstName << userLastName << endl;
    cout << userFirstName.substr(0, 1) << userLastName << endl;
}