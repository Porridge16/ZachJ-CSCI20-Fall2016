#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstNameOne = "fone";
    string firstNameTwo = "ftwo";
    string secondNameOne = "sone";
    string secondNameTwo = "stwo";
    string marriageStatus = "no";
    float grossWages = 0.00;
    float salary1 = 0.00;
    float salary2 = 0.00;
    float tips1 = 0.00;
    float tips2 = 0.00;
    float amountWithheld = 0.00;
    float exemptions = 10000;
    float taxOwed = 0.00;
    float grossAdjustedIncome = 0.00;
    
    
    cout << "What is your first and last name?" << endl;
    cin >> firstNameOne >> firstNameTwo;
        
    cout << "Are you married?" << endl;
    cin >> marriageStatus;
    
    if(marriageStatus == "yes" || marriageStatus == "Yes") {
        cout << "What is your spouses first and last name?" << endl;
        cin >> secondNameOne >> secondNameTwo;
        
        cout << "What is your current salary?" << endl;
        cin >> salary1;
        cout << "How much do you make in tips?" << endl;
        cin >> tips1;
        
        cout << "What is your spouses salary?" << endl;
        cin >> salary2;
        cout << "How much does your spouse make in tips?" << endl;
        cin >> tips2;
        
        cout << "Please wait while we calculate your total gross adjusted income and remaining information..." << endl;
        grossAdjustedIncome = salary1 + salary2 + tips1 + tips2;
        
        if(grossAdjustedIncome == 0.00) {
            grossWages = 0.00;
            taxOwed = 0.00;
            cout << "Names: " << endl;
            cout << firstNameOne << " " << secondNameOne << endl;
            cout << firstNameTwo << " " << secondNameTwo << endl;
            cout << "Total Gross Adjusted Income: " << endl;
            cout << "$" << grossAdjustedIncome << endl;
            cout << "Taxes owed: " << endl;
            cout << "$" << taxOwed << endl;
            cout << "Amount earned after taxes and other exemptions:" << endl;
            cout << "$" << grossWages << endl;
            return (0);
        }
        else if(grossAdjustedIncome <= 17850.00) {
            grossWages = grossAdjustedIncome - (grossAdjustedIncome * .10);
            taxOwed = grossAdjustedIncome * .10 - (2 * exemptions);
            cout << "Names: " << endl;
            cout << firstNameOne << " " << secondNameOne << endl;
            cout << firstNameTwo << " " << secondNameTwo << endl;
            cout << "Total Gross Adjusted Income: " << endl;
            cout << "$" << grossAdjustedIncome << endl;
            cout << "Taxes owed: " << endl;
            cout << "$" << taxOwed << endl;
            cout << "Amount earned after taxes and other exemptions: " << endl;
            cout << "$" << grossWages << endl;
            return (0);
        }
        else if (grossAdjustedIncome <= 72500.00) {
            grossWages = grossAdjustedIncome - 1785.00 - (grossAdjustedIncome * 0.15);
            taxOwed = grossAdjustedIncome * 0.15 - 1785.00 - (2 * exemptions);
            cout << "Names: " << endl;
            cout << firstNameOne << " " << secondNameOne << endl;
            cout << firstNameTwo << " " << secondNameTwo << endl;
            cout << "Total Gross Adjusted Income: " << endl;
            cout << "$" << grossAdjustedIncome << endl;
            cout << "Taxes owed: " << endl;
            cout << "$" << taxOwed << endl;
            cout << "Amount earned after taxes and other exemptions:" << endl;
            cout << "$" << grossWages << endl;
            return (0);
        }
        else if (grossAdjustedIncome >= 72500.00) {
            grossWages = grossAdjustedIncome - 9982.50 - (grossAdjustedIncome * 0.28);
            taxOwed = grossAdjustedIncome * 0.28 - 9982.50 - (2 * exemptions);
            cout << "Names: " << endl;
            cout << firstNameOne << " " << secondNameOne << endl;
            cout << firstNameTwo << " " << secondNameTwo << endl;
            cout << "Total Gross Adjusted Income: " << endl;
            cout << "$" << grossAdjustedIncome << endl;
            cout << "Taxes owed: " << endl;
            cout << "$" << taxOwed << endl;
            cout << "Amount earned after taxes and other exemptions:" << endl;
            cout << "$" << grossWages << endl;
            return (0);
        }
        else {
            grossWages = 0.00;
            taxOwed = 0.00;
            cout << "Names: " << endl;
            cout << firstNameOne << " " << secondNameOne << endl;
            cout << firstNameTwo << " " << secondNameTwo << endl;
            cout << "Total Gross Adjusted Income: " << endl;
            cout << "$" << grossAdjustedIncome << endl;
            cout << "Taxes owed: " << endl;
            cout << "$" << taxOwed << endl;
            cout << "Amount earned after taxes and other exemptions:" << endl;
            cout << "$" << grossWages << endl;
            return (0);
        }
        
    }
    
    else if (marriageStatus == "no" || marriageStatus == "No") {
        cout << "What is your current salary?" << endl;
        cin >> salary1;
        cout << "How much do you make in tips?" << endl;
        cin >> tips1;
        cout << "Please wait while we calculate your total gross adjusted income and remaining information..." << endl;
        grossAdjustedIncome = salary1 + tips1;
        
        if (grossAdjustedIncome == 0.00) {
            grossWages = 0.00;
            taxOwed = 0.00;
            cout << "Names: " << endl;
            cout << firstNameOne << " " << secondNameOne << endl;
            cout << "Total Gross Adjusted Income: " << endl;
            cout << "$" << grossAdjustedIncome << endl;
            cout << "Taxes owed: " << endl;
            cout << "$" << taxOwed << endl;
            cout << "Amount earned after taxes and other exemptions:" << endl;
            cout << "$" << grossWages << endl;
            return (0);
        }
        else if (grossAdjustedIncome <= 8925) {
            grossWages = grossAdjustedIncome - (grossAdjustedIncome * .10);
            taxOwed = grossAdjustedIncome * .10 - exemptions;
            cout << "Names: " << endl;
            cout << firstNameOne << " " << secondNameOne << endl;
            cout << "Total Gross Adjusted Income: " << endl;
            cout << "$" << grossAdjustedIncome << endl;
            cout << "Taxes owed: " << endl;
            cout << "$" << taxOwed << endl;
            cout << "Amount earned after taxes and other exemptions:" << endl;
            cout << "$" << grossWages << endl;
            return (0);
        }
        else if (grossAdjustedIncome <= 36250) {
            grossWages = grossAdjustedIncome - 892.50 - (grossAdjustedIncome * .15);
            taxOwed = grossAdjustedIncome * .15 - 892.50 - exemptions;
            cout << "Names: " << endl;
            cout << firstNameOne << " " << secondNameOne << endl;
            cout << "Total Gross Adjusted Income: " << endl;
            cout << "$" << grossAdjustedIncome << endl;
            cout << "Taxes owed: " << endl;
            cout << "$" << taxOwed << endl;
            cout << "Amount earned after taxes and other exemptions:" << endl;
            cout << "$" << grossWages << endl;
            return (0);
        }
        else if (grossAdjustedIncome <= 87850) {
            grossWages = grossAdjustedIncome - 4991.25 - (grossAdjustedIncome * .25);
            taxOwed = grossAdjustedIncome * .25 - 4991.25 - exemptions;
            cout << "Names: " << endl;
            cout << firstNameOne << " " << secondNameOne << endl;
            cout << "Total Gross Adjusted Income: " << endl;
            cout << "$" << grossAdjustedIncome << endl;
            cout << "Taxes owed: " << endl;
            cout << "$" << taxOwed << endl;
            cout << "Amount earned after taxes and other exemptions:" << endl;
            cout << "$" << grossWages << endl;
            return (0);
        }
        else if (grossAdjustedIncome >= 87850) {
            grossWages = grossAdjustedIncome - 17891.25 - (grossAdjustedIncome * .28);
            taxOwed = grossAdjustedIncome * .28 - 17891.25 - exemptions;
            cout << "Names: " << endl;
            cout << firstNameOne << " " << secondNameOne << endl;
            cout << "Total Gross Adjusted Income: " << endl;
            cout << "$" << grossAdjustedIncome << endl;
            cout << "Taxes owed: " << endl;
            cout << "$" << taxOwed << endl;
            cout << "Amount earned after taxes and other exemptions:" << endl;
            cout << "$" << grossWages << endl;
            return (0);
        }
        else {
            grossWages = 0.00;
            taxOwed = 0.00;
            cout << "Names: " << endl;
            cout << firstNameOne << " " << secondNameOne << endl;
            cout << "Total Gross Adjusted Income: " << endl;
            cout << "$" << grossAdjustedIncome << endl;
            cout << "Taxes owed: " << endl;
            cout << "$" << taxOwed << endl;
            cout << "Amount earned after taxes and other exemptions:" << endl;
            cout << "$" << grossWages << endl;
            return (0);
        }
    }
    
    else {
        cout << "You have input an invalid answer, please re-run the program and try again.";
        return(0);
    }
}




/*
    Tax Table for Individuals
    If Adjusted Gross Income is:
    Then the tax is:
    $0 - $8,925
    10% of the AGI
    $8,926 - $36,250
    $892.50 plus 15% of the excess over $8,925
    $36,251 - $87,850
    $4991.25 plus 25% of the excess over $36,250
    $87,851 and above
    $17,891.25 plus 28% of the excess over $87,850
    
    Tax Table for Married Couples
    If Adjusted Gross Income is:
    Then the tax is:
    $0 - $17,850
    10% of the AGI
    $17,851 - $72,500
    $1,785 plus 15% of the excess over $17,850
    $72,501 and above
    $9,982.50 plus 28% of the excess over $72,500
*/