// Zachary Jorgensen
// 10/25/16
// Blu-Ray Main Menu

#include <iostream>
#include <string>
using namespace std;

int main() {
    int NUM_MENU = 10;
    int mainMenu[NUM_MENU];
    int userInput = 1;
    int numOfInputs[11];
    
    mainMenu[0] = 0; //"Stop"; // stops menu/movie
    mainMenu[1] = 1; //"Play"; // plays movie
    mainMenu[2] = 2; //"Pause"; // pausing movie
    mainMenu[3] = 3; //"Rewind"; // rewinding movie
    mainMenu[4] = 4; //"Fastforward"; // fastforwarding
    mainMenu[5] = 5; //"Scrub"; // frame by frame fast forwarding
    mainMenu[6] = 6; //"Open"; // opening disc tray
    mainMenu[7] = 7; //"Close"; // closing disc tray
    mainMenu[8] = 8; //"Skip"; // skiping chapter
    mainMenu[9] = 9; //"Restart"; // restarting movie
    
    numOfInputs[0] = 0; //stops
    numOfInputs[1] = 0; //plays
    numOfInputs[2] = 0; //pauses
    numOfInputs[3] = 0; //rewinds
    numOfInputs[4] = 0; //fastforwarding
    numOfInputs[5] = 0; //scrubing
    numOfInputs[6] = 0; //opening
    numOfInputs[7] = 0; //closing
    numOfInputs[8] = 0; //skipped
    numOfInputs[9] = 0; //restarts
    numOfInputs[10] = 0; //invalid inputs
    
    while (mainMenu[userInput] > 0) {
        cout << "Blu-ray main menu:" << endl;
        cout << "(1) Play" << endl;
        cout << "(2) Pause" << endl;
        cout << "(3) Rewind" << endl;
        cout << "(4) Fastforward" << endl;
        cout << "(5) Fine Scrub" << endl;
        cout << "(6) Open" << endl;
        cout << "(7) Close" << endl;
        cout << "(8) Skip" << endl;
        cout << "(9) Restart" << endl;
        cout << "(0) Stop" << endl;
        cin >> mainMenu[userInput];
        switch (mainMenu[userInput]) {
            case 0:
                cout << "Stopped" << endl;
                ++numOfInputs[0];
                break;
            case 1:
                cout << "Playing" << endl;
                ++numOfInputs[1];
                break;
            case 2:
                cout << "Paused" << endl;
                ++numOfInputs[2];
                break;
            case 3:
                cout << "Rewinding" << endl;
                ++numOfInputs[3];
                break;
            case 4:
                cout << "Fastforwarding" << endl;
                ++numOfInputs[4];
                break;
            case 5:
                cout << "Scrubing" << endl;
                ++numOfInputs[5];
                break;
            case 6:
                cout << "Opening Tray" << endl;
                ++numOfInputs[6];
                break;
            case 7:
                cout << "Closing Tray" << endl;
                ++numOfInputs[7];
                break;
            case 8:
                cout << "Skipping to next chapter" << endl;
                ++numOfInputs[8];
                break;
            case 9:
                cout << "Resarting movie" << endl;
                ++numOfInputs[9];
                break;
            default:
                cout << "Invalid, please try again." << endl;
                ++numOfInputs[10];
                break;
        }
    }
    cout << "Number of Inputs requested: " << endl;
    cout << "Played: " << numOfInputs[1] << endl;
    cout << "Paused: " << numOfInputs[2] << endl;
    cout << "Rewinds: " << numOfInputs[3] << endl;
    cout << "Fastforwards: " << numOfInputs[4] << endl;
    cout << "Fine Scrubs: " << numOfInputs[5] << endl;
    cout << "Opened: " << numOfInputs[6] << endl;
    cout << "Closed: " << numOfInputs[7] << endl;
    cout << "Skipped: " << numOfInputs[8] << endl;
    cout << "Restarted: " << numOfInputs[9] << endl;
    cout << "Stopped: " << numOfInputs[0] << endl;
    cout << "Invalid commands: " << numOfInputs[10] << endl;
}