// Zachary Jorgensen
// September 5th 2016
// This program emulates the properties of a CoinStar Machine.

#include <iostream>
using namespace std;

int main()
{
    int originalChange = 0;
    int changeDropped = 0;
    int numOfPennies = 0;
    int numOfNickels = 0;
    int numOfDimes = 0;
    int numOfQuarters = 0;
    float cashMoney = 0.00;
    float originalCashMoney = 0.00;
    
    cout << "Enter the amount of change you have: ";
    cin >> originalChange;
    changeDropped = originalChange;
    cout << "Entered amount is " << changeDropped << " cents." << endl;
    
    numOfQuarters = changeDropped / 25;
    changeDropped = changeDropped % 25;
    numOfDimes = changeDropped / 10;
    changeDropped = changeDropped % 10;
    numOfNickels = changeDropped / 5;
    numOfPennies = changeDropped % 5;
    
    //cout << numOfQuarters << " " << numOfDimes << " " << numOfNickels << " " << numOfPennies;
    cout << "There were ";
    cout << numOfQuarters << " quarters, " << numOfDimes << " dimes, ";
    cout << numOfNickels << " nickels, and " << numOfPennies << " pennies." << endl;
    
    originalCashMoney = originalChange / 100.00;
    changeDropped = originalChange;
    changeDropped = changeDropped * 0.109;
    changeDropped = originalChange - changeDropped;
    cashMoney = changeDropped / 100.00;
    
    cout << "The total is $" << originalCashMoney << "." << " After the fee you will recieve $" << cashMoney << " in cash.";
    return 0;
    
}