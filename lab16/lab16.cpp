// McDonald's Burger Menu
// Zachary Jorgensen
// 10/27/16

#include <iostream>
using namespace std;

int main() {
    //int NUM_MENU = 10;
    int mainMenu[10]; //items on menu, inventory
    //int inventory = 0;
    //int numOfInputs[11];
    float prices [10][2];
    float totalCost;
    int userInput = 1;
    char userAnswer = 'n';
    
    mainMenu[0] = 0; //to finish ordering
    mainMenu[1] = 1; //hamburger, 100 premade
    mainMenu[2] = 2; //cheeseburgers, 100 premade
    mainMenu[3] = 3; //fries, 100 premade
    mainMenu[4] = 4; //egg mcGmuffin, 100 premade
    mainMenu[5] = 5; //mcGchicken, 100 premade
    mainMenu[6] = 6; //mcGdouble, 100 premade
    mainMenu[7] = 7; //big Gerald, 100 premade
    mainMenu[8] = 8; //mcGflurry, enough for 100
    mainMenu[9] = 9; //drink, enough for 100 cups
    
    prices[0][0] = 0; //no item
    prices[1][0] = 1.11; //hamburger
    prices[1][1] = 100;
    prices[2][0] = 1.25; //cheeseburgers
    prices[2][1] = 100;
    prices[3][0] = 0.92; //fries
    prices[3][1] = 100;
    prices[4][0] = 2.35; //egg mcmuffin
    prices[4][1] = 100;
    prices[5][0] = 1.05; //mcchicken
    prices[5][1] = 100;
    prices[6][0] = 1.36; //mcdouble
    prices[6][1] = 100;
    prices[7][0] = 3.43; //big mac
    prices[7][1] = 100;
    prices[8][0] = 0.95; //mcflurry
    prices[8][1] = 100;
    prices[9][0] = 1.08; //drink
    prices[9][1] = 100;
    
    cout << "Welcome to McGerald's, home of the famous Big Gerald!" << endl;
    cout << "What would you like to order?" << endl;
    while(mainMenu[userInput] > 0) {
        cout << "(1) McGerald Hamburger" << endl;
        cout << "(2) McGerald Cheeseburger" << endl;
        cout << "(3) McGee's Fries" << endl;
        cout << "(4) Egg McGeeMuffin" << endl;
        cout << "(5) McGeeChicken" << endl;
        cout << "(6) McGeeDouble" << endl;
        cout << "(7) Big Gerald" << endl;
        cout << "(8) McGeeFlurry" << endl;
        cout << "(9) Soda" << endl;
        cout << "(0) To finish ordering" << endl;
        cin >> userInput;
        
        switch (mainMenu[userInput]) {
            case 0:
                cout << "Your total is:" << endl;
                cout << "$" << totalCost << endl;
                cout << "Please pull up to the first window." << endl;
                break;
            case 1:
                cout << "The price for a McGerald Hamburger is $" << prices[1][0] << ". Do you still want a McGerald Hamburger? (Y for Yes, N for No)" << endl;
                cin >> userAnswer;
                if (userAnswer == 'y' || userAnswer == 'Y') {
                    cout << "McGerald Hamburger coming right up." << endl;
                    --prices[1][1];
                    totalCost = prices[1][0] + totalCost;
                    cout << "(Current inventory for McGerald Hamburger: " << prices[1][1] << " / Overall total is $" << totalCost << ")" << endl;
                    cout << "What else would you like to order?" << endl;
                }
                else {
                    cout << "What would you like to order?" << endl;
                }
                break;
            case 2:
                cout << "The price for a McGerald Cheeseburger is $" << prices[2][0] << ". Do you still want a McGerald Cheeseburger? (Y for Yes, N for No)" << endl;
                cin >> userAnswer;
                if (userAnswer == 'y' || userAnswer == 'Y') {
                    cout << "McGerald Cheeseburger coming right up." << endl;
                    --prices[2][1];
                    totalCost = prices[2][0] + totalCost;
                    cout << "(Current inventory for McGerald Cheeseburger: " << prices[2][1] << " / Overall total is $" << totalCost << ")" << endl;
                    cout << "What else would you like to order?" << endl;
                }
                else {
                    cout << "What would you like to order?" << endl;
                }
                break;
            case 3:
                cout << "The price for a McGee's Fries is $" << prices[3][0] << ". Do you still want a McGee's Fries? (Y for Yes, N for No)" << endl;
                cin >> userAnswer;
                if (userAnswer == 'y' || userAnswer == 'Y') {
                    cout << "You got it! One McGee's Fries on the way." << endl;
                    --prices[3][1];
                    totalCost = prices[3][0] + totalCost;
                    cout << "(Current inventory for McGee's Fries: " << prices[3][1] << " / Overall total is $" << totalCost << ")" << endl;
                    cout << "What else would you like to order?" << endl;
                }
                else {
                    cout << "What would you like to order?" << endl;
                }
                break;
            case 4:
                cout << "The price for a Egg McGeeMuffin is $" << prices[4][0] << ". Do you still want a Egg McGeeMuffin? (Y for Yes, N for No)" << endl;
                cin >> userAnswer;
                if (userAnswer == 'y' || userAnswer == 'Y') {
                    cout << "You got it! One Egg McGeeMuffin on the way." << endl;
                    --prices[4][1];
                    totalCost = prices[4][0] + totalCost;
                    cout << "(Current inventory for Egg McGeeMuffin: " << prices[4][1] << " / Overall total is $" << totalCost << ")" << endl;
                    cout << "What else would you like to order?" << endl;
                }
                else {
                    cout << "What would you like to order?" << endl;
                }
                break;
            case 5:
                cout << "The price for a McGeeChicken is $" << prices[5][0] << ". Do you still want a McGeeChicken? (Y for Yes, N for No)" << endl;
                cin >> userAnswer;
                if (userAnswer == 'y' || userAnswer == 'Y') {
                    cout << "One McGeeChicken on the way." << endl;
                    --prices[5][1];
                    totalCost = prices[5][0] + totalCost;
                    cout << "(Current inventory for McGeeChicken: " << prices[5][1] << " / Overall total is $" << totalCost << ")" << endl;
                    cout << "What else would you like to order?" << endl;
                }
                else {
                    cout << "What would you like to order?" << endl;
                }
                break;
            case 6:
                cout << "The price for a McGeeDouble is $" << prices[6][0] << ". Do you still want a McGeeDouble? (Y for Yes, N for No)" << endl;
                cin >> userAnswer;
                if (userAnswer == 'y' || userAnswer == 'Y') {
                    cout << "One McGeeDouble on the way." << endl;
                    --prices[6][1];
                    totalCost = prices[6][0] + totalCost;
                    cout << "(Current inventory for McGeeDouble: " << prices[6][1] << " / Overall total is $" << totalCost << ")" << endl;
                    cout << "What else would you like to order?" << endl;
                }
                else {
                    cout << "What would you like to order?" << endl;
                }
                break;
            case 7:
                cout << "The price for a Big Gerald is $" << prices[7][0] << ". Do you still want our famous Big Gerald? (Y for Yes, N for No)" << endl;
                cin >> userAnswer;
                if (userAnswer == 'y' || userAnswer == 'Y') {
                    cout << "One famous Big Gerald on the way." << endl;
                    --prices[7][1];
                    totalCost = prices[7][0] + totalCost;
                    cout << "(Current inventory for Big Gerald: " << prices[7][1] << " / Overall total is $" << totalCost << ")" << endl;
                    cout << "What else would you like to order?" << endl;
                }
                else {
                    cout << "What would you like to order?" << endl;
                }
                break;
            case 8:
                cout << "The price for a McGeeFlurry is $" << prices[8][0] << ". Do you still want a McGeeFlurry? (Y for Yes, N for No)" << endl;
                cin >> userAnswer;
                if (userAnswer == 'y' || userAnswer == 'Y') {
                    cout << "One McGeeFlurry on the way." << endl;
                    --prices[8][1];
                    totalCost = prices[8][0] + totalCost;
                    cout << "(Current inventory for McGeeFlurry: " << prices[8][1] << " / Overall total is $" << totalCost << ")" << endl;
                    cout << "What else would you like to order?" << endl;
                }
                else {
                    cout << "What would you like to order?" << endl;
                }
                break;
            case 9:
                cout << "The price for a Soda is $" << prices[9][0] << ". Do you still want a Soda? (Y for Yes, N for No)" << endl;
                cin >> userAnswer;
                if (userAnswer == 'y' || userAnswer == 'Y') {
                    cout << "One Soda on the way." << endl;
                    --prices[9][1];
                    totalCost = prices[9][0] + totalCost;
                    cout << "(Current inventory for Soda: " << prices[9][1] << " / Overall total is $" << totalCost << ")" << endl;
                    cout << "What else would you like to order?" << endl;
                }
                else {
                    cout << "What would you like to order?" << endl;
                }
                break;
            default:
                cout << "Sorry, can you please repeat that request?" << endl;
                cout << "What would you like to order?" << endl;
                break;
        }
    }
}