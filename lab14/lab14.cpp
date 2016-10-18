// This program reads in a letter and reports whether
// it is an uppercase letter, a lowercase letter, or neither.

#include <iostream>
using namespace std;
int main() {
    // Read a character in
    char ch;
    cout << "Please enter a character: ";
    cin >> ch;
    // check -- is it a letter??
    if (ch >= 'A' && ch <= 'Z') {
        //if (ch <= 'Z') {
            cout << "Yes, that is a uppercase letter." << endl;
        //}
    }
    else if (ch >= 'a' && ch <= 'z') {
        //if (ch <= 'z') {
            cout << "Yes, that is a lowercase letter" << endl;
        //}
    }
    else {
        cout << "Not a letter" << endl;
    }
return 0;
}

// While debugging this I realized that the problem was that instead of using a nested if statement, it would probably work better if
// instead of going from one if statement to the next, the program would evaluate the options on one line withing one if statement.
// I used the rubber duck method except I was just mumbling to myself rather than to a rubber duck.