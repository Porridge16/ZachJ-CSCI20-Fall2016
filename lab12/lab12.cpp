// Zachary Jorgensen
// October 10, 2016
// What Animal Are You?

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int userInput;
    
    cout << "What animal are you?" << endl;
    cout << "Answer with a '1' for yes and a '2' for no." << endl;
    cout << "Do you like the outdoors?" << endl;
    cin >> userInput;
    
    switch (userInput) {
        case 1:
        cout << "Are you over 500 pounds?" << endl;
        cin >> userInput;
        if (userInput == 1) {
            cout << "Are you agressive?" << endl;
            cin >> userInput;
            if (userInput == 1) {
                cout << "You are a Grizzly Bear!" << endl;
            }
            else if (userInput == 2) {
                cout << "You are an elephant!" << endl;
            }
            else {
                cout << "Please try again." << endl;
            }
        }
        else if (userInput == 2) {
            cout << "Are you fast?" << endl;
            cin >> userInput;
            if (userInput == 1) {
                cout << "You are a cheetah!" << endl;
            }
            else if (userInput == 2) {
                cout << "You are a sloth." << endl;
            }
            else {
                cout << "Please try again." << endl;
            }
        }
        else {
            cout << "Please try again." << endl;
        }
        break;
        
        case 2:
        cout << "Do you like yarn?" << endl;
        cin >> userInput;
        if (userInput == 1) {
            cout << "You are a cat." << endl;
        }
        else if (userInput == 2) {
            cout << "Do you have a hard exoskeleton?" << endl;
            cin >> userInput;
            if (userInput == 1) {
                cout << "You are a tortoise." << endl;
            }
            else if (userInput == 2) {
                cout << "You are a dog." << endl;
            }
            else {
                cout << "Please try again." << endl;
            }
        }
        else {
            cout << "Please try again." << endl;
        }
        break;
        default:
        cout << "Please try again.";
        break;
    }
}