// Lab 20
// Zachary Jorgensen
// 11/17/16
// The code was written by April Browne, the goal of this lab is to evaluate the code and comment what everything does.

#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
    char firststr[10]; // C-String
    int firstname = 0;
    char *head = firststr; // Intializes a pointer
    char *tail = firststr; // Intializes a pointer
                
    cout << "Please enter a 10 letter word or less" << endl;
    cin >> firststr;
    strlen(firststr); // Returns number of characters up to, but not including, first null character.
    firstname = strlen(firststr);
    cout << "Your word is " << firststr << endl;
    if (firstname < 10) {
        while (*head != '\0') { // Stops the loop once the pointer points to the null character.
            cout << *head;
            head++;
        }
    }
    else {
        cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
    }
    cout << endl;
                
    
    
    tail = &firststr[strlen(firststr) - 1]; // Points at the character before the null character.
    if (firstname < 10) { // Prints the word backwards by starting at the last character and minusing the C-String by one, printing out each lettter in the process.
        while (*tail > 0) {
            cout << *tail;
            tail--;
        }
    }
    cout << endl;
    
    
    
    head = firststr; // The head is stored as the original word that was input.
    tail = &firststr[strlen(firststr) - 1]; // Once again, it points at the character before the null character.
    head++; // Moves the pointer up to the next letter.
    tail--; // Moves the pointer down to the next letter.
    if (*head == *tail) {
        cout << "It is an palindrome!" << endl;
    }
    else {
        cout << "It is not an palindrome" << endl;
    }
    return 0;
}

/*  
    The issue with this program is that it does not trully discover if the word provided is a palindrome.
    This program only evaluate the first two characters with the last two characters and evaluates if they are equal.
    For example:
    "hannah" would return "It is an palindrome!"
    "hennah" would return "It is not an palindrome"
    but
    "hanmah" would return "It is an palindrome!"
*/