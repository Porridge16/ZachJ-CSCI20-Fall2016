#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char userFirstName[10] = "\0";
    char userLastName[20] = "\0";
    int i = 0;
    
    cout << "Enter your first name: (<10 chars): ";
    cin >> userFirstName;
    
    if (userFirstName[11] >= 10) {
        cout << "WARNING: You have entered a name that is too large." << endl;
        cout << "We will shorten that to the first 10 letters you provided." << endl << endl;
    }
    
    cout << endl << "Enter your last name: (<20 chars): ";
    cin >> userLastName;
    
    if (userLastName[20] > 20) {
        cout << "WARNING: You have entered a name that is too large." << endl;
        cout << "We will shorten that to the first 20 letters you provided." << endl << endl;
    }
    /*
    for (int j = 0; j < 20; ++j) { // Print each char // can't get it to stop it at 10 characters
        cout << userLastName[j];
    }
    */
    if(userFirstName[0] == userLastName[0] && userFirstName[1] == userLastName[1] && userFirstName[2] == userLastName[2] && userFirstName[3] == userLastName[3] && userFirstName[4] == userLastName[4]) {
        cout << "Doesnt work";
        return 0;
    }
    cout << "Name: " << userFirstName << " " << userLastName << endl;
    while (i < 10) { // Print each char
        if (isupper(userFirstName[i])) {
            userFirstName[i] = tolower(userFirstName[i]);
            //cout << userFirstName[i];
        }
        ++i;
    }
    //userFirstName[1] = tolower(userFirstName[1]);
    for (int j = 0; j < 20; ++j) { // Print each char
        if (isupper(userLastName[j])) {
            userLastName[j] = tolower(userLastName[j]);
            //cout << userLastName[j];
        }
    }
    cout << "Which of the three user names would you like: " << endl << endl;
    cout << endl << userFirstName[0] << userFirstName[1] << userLastName << endl;
    cout << endl << userFirstName << userLastName << endl;
    cout << endl << userFirstName[0] << userLastName << endl;
}