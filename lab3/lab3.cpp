// Zachary Jorgensen
// 8/30/2016
// Mad Lib!

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName = "";
    string secondName = "";
    string adjective1 = "";
    string adjective2 = "";
    string noun1 = "";
    string noun2 = "";
    char initial = '-';
    int guildYears = 0;
    float coffeePrice = 0;
    
    cout << "My name is (name) ";
    cin >> firstName;
    cout << " the (adjective) ";
    cin >> adjective1;
    cout << "but you may just call me (first initial) ";  
    cin >> initial;
    cout << "You may know me from my history in the (noun) ";
    cin >> noun1;
    cout << " guild. I was a part of that faction for over (number) ";
    cin >> guildYears;
    cout << " years." << endl << "If it wasn't for me, we wouldn't have defeated (name) ";
    cin >> secondName;
    cout << " the (noun) ";
    cin >> noun2;
    cout << "Anyway, here's (amount of money) ";
    cin >> coffeePrice;
    cout << " for my coffee." << endl;
    cout << "Have a (adjective) " ;
    cin >> adjective2;
    cout << "day!" << endl;
    cout << " " << endl;
    
    cout << "Inputs:" << endl;
    cout << firstName << endl;
    cout << secondName << endl;
    cout << adjective1 << endl;
    cout << adjective2 << endl;
    cout << noun1 << endl;
    cout << noun2 << endl;
    cout << initial << endl;
    cout << guildYears << endl;
    cout << coffeePrice << endl;
}