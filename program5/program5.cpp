/*
Zachary Jorgensen
12/7/26
 
The purpose of this program is to take into account what I spend and
tell me what I have in both my savings and checking’s account.
*/

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;


class MyBank {
    public:
        void SetSavTransactions(double mySavingsTransactions[], int S_TRANSACTIONS);
        void SetCheTransactions(double myCheckingTransactions[], int C_TRANSACTIONS);
        double GetSavTransactions() const;
        double GetCheTransactions() const;
        MyBank(); //default constructor
    private:
        double savingsBalance;
        double checkingBalance;
};

MyBank::MyBank() { //default constructor
	savingsBalance = 0.00;
	checkingBalance = 0.00;
	return;
}

void MyBank::SetSavTransactions(double mySavingsTransactions[], int S_TRANSACTIONS) {
    int NUMBER_S_TRANSACTIONS = 2;
    for (int i = 0; i < NUMBER_S_TRANSACTIONS; ++i) {
    	savingsBalance = savingsBalance + mySavingsTransactions[i];
    }
    return;
}

void MyBank::SetCheTransactions(double myCheckingTransactions[], int C_TRANSACTIONS) {
    int NUMBER_C_TRANSACTIONS = 8;
    for (int i = 0; i < NUMBER_C_TRANSACTIONS; ++i) {
    	checkingBalance = checkingBalance + myCheckingTransactions[i];
    }
    return;
}

double MyBank::GetSavTransactions() const {
    return savingsBalance;
}

double MyBank::GetCheTransactions() const {
    return checkingBalance;
}




int main() {
    int NUMBER_C_TRANSACTIONS = 8;
    int NUMBER_S_TRANSACTIONS = 2;
    char userInput;
    string row[NUMBER_C_TRANSACTIONS];
    string srow[NUMBER_S_TRANSACTIONS];
    string date[NUMBER_C_TRANSACTIONS];
    string sdate[NUMBER_S_TRANSACTIONS];
    string store[NUMBER_C_TRANSACTIONS];
    string sstore[NUMBER_S_TRANSACTIONS];
    double transaction[NUMBER_C_TRANSACTIONS];
    double stransaction[NUMBER_S_TRANSACTIONS];
    
    istringstream inSS;
    ofstream outFS;
    ifstream inFS;
    MyBank savings;
	MyBank checking;
    
    inFS.open ("checkbook.txt");
	outFS.open ("newCheckbook.out");
	
	
	
	
	for (int i = 0; i < NUMBER_C_TRANSACTIONS; ++i) {
	    getline(inFS, row[i]);
	    //cout << row[i] << endl;
	}
	
	for (int i = 0; i < NUMBER_C_TRANSACTIONS; ++i) {
	    getline(inFS, row[i]);
        inSS.clear();
        inSS.str(row[i]);
	    //cout << endl;
	    inSS.str(row[i]);
	    inSS >> date[i];
	    inSS >> store[i];
	    inSS >> transaction[i];
	}
	
	//checking.SetCheTransactions(transaction, NUMBER_C_TRANSACTIONS);
	//cout << checking.GetCheTransactions();
	
	/*
	for (int i = 0; i < NUMBER_C_TRANSACTIONS; ++i) {
	    cout << date[i] << " " << store[i] << " " << fixed << setprecision(2) << transaction[i] << " " << endl;
    }
    */
    
	inFS.close();
	outFS.close();
	
	//cout << endl;
	
	inFS.open ("savebook.txt");
	outFS.open ("newSavebook.out");
	
	for (int i = 0; i < NUMBER_S_TRANSACTIONS; ++i) {
	    getline(inFS, srow[i]);
	    //cout << row[i] << endl;
	}
	
	for (int i = 0; i < NUMBER_S_TRANSACTIONS; ++i) {
	    getline(inFS, srow[i]);
        inSS.clear();
        inSS.str(srow[i]);
	    //cout << endl;
	    inSS.str(srow[i]);
	    inSS >> sdate[i];
	    inSS >> sstore[i];
	    inSS >> stransaction[i];
	}
	/*
	for (int i = 0; i < NUMBER_S_TRANSACTIONS; ++i) {
	    cout << sdate[i] << " " << sstore[i] << " " << fixed << setprecision(2) << stransaction[i] << " " << endl;
    }
    */
	inFS.close();
	outFS.close();
	
	
	
	// Menu
	cout << "(Please double check the file you input to make sure all transactions recorded are done correctly.)" << endl;
	cout << "Welcome to your personal bank!" << endl;
    cout << "Press ‘s’ to look at your savings account," << endl;
    cout << "press ‘c’ to look at your checking account or" << endl;
    cout << "press ‘t’ to see your transactions log." << endl;
    cout << "Press ‘q’ to quit" << endl;
    cin >> userInput;
    while (userInput != 'q') {
        if (userInput == 's' && userInput != 'r') { //menu for savings
	        while (userInput == 's' || userInput != 'r') { 
	            cout << endl << "The current amount in your savings account is:" << endl;
	            savings.SetSavTransactions(stransaction, NUMBER_S_TRANSACTIONS);
				cout << fixed << setprecision(2) << "$" << savings.GetSavTransactions() << endl;
				cout << "To exit to the main menu please press 'r'" << endl;
	            cin >> userInput;
	        }
        }
        else if (userInput == 'c' && userInput != 'r') { //menu for checking
	        while (userInput == 'c' || userInput != 'r') {
	            cout << endl << "The current amount in your checking account is:" << endl;
	            checking.SetCheTransactions(transaction, NUMBER_C_TRANSACTIONS);
				cout << fixed << setprecision(2) << "$" << checking.GetCheTransactions() << endl;
				cout << "To exit to the main menu please press 'r'" << endl;
	            cin >> userInput;
	        }
        }
        else if (userInput == 't' && userInput != 'r') { // menu for all transactions
	        while (userInput == 't' || userInput != 'r') {
	            cout << endl << "Transactions: " << endl;
	            cout << endl << "Checking Log: " << endl;
	            for (int i = 0; i < NUMBER_C_TRANSACTIONS; ++i) {
	    			cout << date[i] << " " << store[i] << " " << fixed << setprecision(2) << transaction[i] << " " << endl;
    			}
	            cout << endl << "Savings Log: " << endl;
	            for (int i = 0; i < NUMBER_S_TRANSACTIONS; ++i) {
	    			cout << sdate[i] << " " << sstore[i] << " " << fixed << setprecision(2) << stransaction[i] << " " << endl;
				}
	            cout << "To exit to the main menu please press 'r'" << endl;
	            cin >> userInput;
	        }
        }
    cout << endl << "Welcome back to the main menu!" << endl;
    cout << "Press ‘s’ to look at your savings account," << endl;
    cout << "press ‘c’ to look at your checking account or" << endl;
    cout << "press ‘t’ to see your transactions log." << endl;
    cout << "Press ‘q’ to quit" << endl;
    cin >> userInput;
    }
    return(0);
}