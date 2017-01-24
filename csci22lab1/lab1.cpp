// Zachary Jorgensen
// January 24, 2017
// Lab 1

#include <iostream>
using namespace std;
 
int main() {
    cout << "Three-even Values: ";
    for (int i = 0; i <= 50; ++i) {
        if ((i%3) == 0) {
            cout << i << " ";
        }
    }
    
    cout << endl << "Even Values: ";
    for (int i = 0; i <= 50; ++i) {
        if (((i % 2) == 0) && ((i % 3) != 0)) {
            cout << i << " ";
        }
    }
    
    cout << endl << "Neither: ";
    for (int i = 0; i <= 50; ++i) {
        if (((i % 2) != 0) && ((i % 3) != 0)) {
            cout << i << " ";
        }
    }
}