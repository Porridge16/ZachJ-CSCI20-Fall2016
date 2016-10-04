// Name: Zachary Jorgensen
// Start Date: 15 September 2016
// Last Edited Date: 15 September 2016

// This program evaluates a persons weekly paycheck.
// Equations: (hourly salary)(hours) = gross pay
//            (gross pay)(.17) = money taxed
//            (gross pay) - (tax money) = net money

#include <iostream>
#include <string>
using namespace std;

void hello()
{
    cout << "Hi there. This program is designed to evaluate your weekly pay check." << endl;
    cout << "First, what is your first name?" << endl;
}

int main()
{
    string clientFirstName = "";
    string clientSecondName = "";
    double hourlySalary = 00.00; // The wage you are earning at work.
    double hoursWorked = 00.00;
    double grossPay = 00.00; // Before taxes.
    double netPay = 00.00; // After taxes.
    double taxedMoney = 00.00;
    
    hello();
    cin >> clientFirstName;
    cout << "What is your last name?" << endl;
    cin >> clientSecondName;
    
    cout << "Please enter the remaining information:" << endl;
    cout << "Hourly salary: ";
    cin >> hourlySalary;
    
    cout << "Hours worked: ";
    cin >> hoursWorked;
    
    grossPay = hourlySalary * hoursWorked;
    cout << "Your gross pay: $" << grossPay << endl;
    
    taxedMoney = grossPay * 0.170; // 0.170 is the current tax on pay checks.
    netPay = grossPay - taxedMoney;
    cout << "The California tax rate: .17" << endl;
    cout << "Your net pay: $" << netPay << endl;
    
    cout << " " << endl;
    cout << "Information:" << endl;
    cout << "Name: " << clientFirstName << " " << clientSecondName << endl;
    cout << "Hourly salary: $" << hourlySalary << endl;
    cout << "Hours worked: " << hoursWorked << endl;
    cout << "Tax/rate: .17" << endl;
    cout << "Gross pay: $" << grossPay << endl;
    cout << "Net Pay: $" << netPay << endl;
    
    return (0);
}