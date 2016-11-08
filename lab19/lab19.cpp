#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ofstream outFS;     // Input file stream
    string inputForRowOne; // Input string
    int endColumnOne;
    int endRowOne;
    string inputForRowTwo; // Input string
    int endColumnTwo;
    int endRowTwo;
    string inputForRowThree; // Input string
    int endColumnThree;
    int endRowThree;
    int endColumnFour;
    //string inputForRowFour; // Input string
    istringstream inSS;      // Input string stream
    int allRows[3][4];
    
    cout << "This exercise will allow us to display a grid of numbers while adding them together both horizontally and vertically." << endl;
    cout << "Please enter row one. (Ex: 1 2 3 4)" << endl;
    getline(cin, inputForRowOne);;
    inSS.clear();
    inSS.str(inputForRowOne);
    
    inSS >> allRows[0][0];
    inSS >> allRows[0][1];
    inSS >> allRows[0][2];
    inSS >> allRows[0][3];
    
    
    
    cout << "Please enter row two. (Ex: 5 6 7 8)" << endl;
    getline(cin, inputForRowTwo);;
    inSS.clear();
    inSS.str(inputForRowTwo);
    
    inSS >> allRows[1][0];
    inSS >> allRows[1][1];
    inSS >> allRows[1][2];
    inSS >> allRows[1][3];
    
    
    
    cout << "Please enter row three." << endl;
    getline(cin, inputForRowThree);;
    inSS.clear();
    inSS.str(inputForRowThree);
    
    inSS >> allRows[2][0];
    inSS >> allRows[2][1];
    inSS >> allRows[2][2];
    inSS >> allRows[2][3];
    cout << endl;
    
    
    /*
    cout << "Please enter row four." << endl;
    getline(cin, inputForRowFour);;
    inSS.clear();
    inSS.str(inputForRowFour);
    
    inSS >> allRows[3][0];
    inSS >> allRows[3][1];
    inSS >> allRows[3][2];
    inSS >> allRows[3][3];
    */
    endColumnOne = (allRows[0][0] + allRows[1][0] + allRows[2][0]);
    endColumnTwo = (allRows[0][1] + allRows[1][1] + allRows[2][1]);
    endColumnThree = (allRows[0][2] + allRows[1][2] + allRows[2][2]);
    endColumnFour = (allRows[0][3] + allRows[1][3] + allRows[2][3]);
    endRowOne = (allRows[0][0] + allRows[0][1] + allRows[0][2] + allRows[0][3]);
    endRowTwo = (allRows[1][0] + allRows[1][1] + allRows[1][2] + allRows[1][3]);
    endRowThree = (allRows[2][0] + allRows[2][1] + allRows[2][2] + allRows[2][3]);
    
    cout << " " << allRows[0][0] << "  " << allRows[0][1] << "  " << allRows[0][2] << "  " << allRows[0][3] << " " << endRowOne << endl;
    cout << " " << allRows[1][0] << "  " << allRows[1][1] << "  " << allRows[1][2] << "  " << allRows[1][3] << " " << endRowTwo << endl;
    cout << " " << allRows[2][0] << " " << allRows[2][1] << " " << allRows[2][2] << " " << allRows[2][3] << " " << endRowThree << endl;
    //cout << allRows[3][0] << " " << allRows[3][1] << " " << allRows[3][2] << " " << allRows[3][3] << " " << (allRows[3][0] + allRows[3][1] + allRows[3][2] + allRows[3][3]) << endl;
    cout << endColumnOne << " " << endColumnTwo << " " << endColumnThree << " " << endColumnFour << endl;
    
    outFS.open("output.txt");
   
    if (!outFS.is_open()) {
       cout << "Could not open file output.txt." << endl;
       return 1;
    }
   
    // Create and write in a file
    outFS << "Output:" << endl;
    outFS << " " << allRows[0][0] << "  " << allRows[0][1] << "  " << allRows[0][2] << "  " << allRows[0][3] << " " << endRowOne << endl;
    outFS << " " << allRows[1][0] << "  " << allRows[1][1] << "  " << allRows[1][2] << "  " << allRows[1][3] << " " << endRowTwo << endl;
    outFS << " " << allRows[2][0] << " " << allRows[2][1] << " " << allRows[2][2] << " " << allRows[2][3] << " " << endRowThree << endl;
    outFS << endColumnOne << " " << endColumnTwo << " " << endColumnThree << " " << endColumnFour << endl;
    
    outFS.close();
    
    return 0;
}