// Zachary Jorgensen
// 10/18/16
// This is a Rock Paper Scissors Game that allows for rounds up to either 3, 5, or 7.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class COMPlayer { // Generates a random choice for the 2nd player.
    public:
    void SetAnswer(int randNum);
    int GetAnswer();
    COMPlayer();
    
    private:
    int computersAnswer;
    
};

COMPlayer::COMPlayer() {
    srand(time(0));
}
void COMPlayer::SetAnswer(int randNum) { // Sets the choice.
    computersAnswer = ((rand() % 3) + 1);
    return;
}
int COMPlayer::GetAnswer() { // Gain access to the choice.
    return computersAnswer;
}

int main() {
    COMPlayer COM;
    int numRounds = 1;
    int playerOneWins = 0;
    int playerOneLoses = 0;
    int COMPlayerWins = 0;
    int COMPlayerLoses = 0;
    int PlayerInput;
    
    cout << "Let's play Rock, Paper, Scissors!" << endl;
    cout << "How many rounds would you like to play? 3, 5, or 7?" << endl;
    cin >> PlayerInput;
    
    if (PlayerInput == 3) {
        while (numRounds <= 3) { // 3 Rounds
            cout << "'Choose (1) for Rock, (2) for Paper, or (3) for scissors.'" << endl;
            cout << "One, two, three, shoot!" << endl;
            cin >> PlayerInput;
            switch (PlayerInput) {
                case 1:
                    cout << "Rock" << endl;
                    break;
                case 2:
                    cout << "Paper" << endl;
                    break;
                case 3:
                    cout << "Scissors" << endl;
                    break;
                case 4:
                    cout << "Invalid answer. Ending Program." << endl;
                    return 0;
            }
            COM.SetAnswer(1);
            COM.GetAnswer();
            switch(COM.GetAnswer()) {
                case 1:
                    cout << "Rock" << endl;
                    break;
                case 2:
                    cout << "Paper" << endl;
                    break;
                case 3:
                    cout << "Scissors" << endl;
                    break;
            }
                
            if (COM.GetAnswer() == PlayerInput) {
                cout << "Tie" << endl;
            }
            else if (COM.GetAnswer() == 1 && PlayerInput == 2) {
                //COM is Rock and Player is Paper
                cout << "Round Won" << endl;
                ++numRounds;
                ++playerOneWins;
                ++COMPlayerLoses;
            }
            else if (COM.GetAnswer() == 1 && PlayerInput == 3) {
                // COM is Rock and Player is Scissors.
                cout << "Round Lost" << endl;
                ++numRounds;
                ++playerOneLoses;
                ++COMPlayerWins;
            }
            else if (COM.GetAnswer() == 2 && PlayerInput == 1) {
                // COM is Paper and Player is Rock.
                cout << "Round Lost" << endl;
                ++numRounds;
                ++playerOneLoses;
                ++COMPlayerWins;
            }
            else if (COM.GetAnswer() == 2 && PlayerInput == 3) {
                // COM is Paper and Player is Scissors.
                cout << "Round Won" << endl;
                ++numRounds;
                ++playerOneWins;
                ++COMPlayerLoses;
            }
            else if (COM.GetAnswer() == 3 && PlayerInput == 1) {
                // COM is Scissors and Player is Rock.
                cout << "Round Won" << endl;
                ++numRounds;
                ++playerOneWins;
                ++COMPlayerLoses;
            }
            else if (COM.GetAnswer() == 3 && PlayerInput == 2) {
                // COM is Scissors and Player is Paper.
                cout << "Round Lost" << endl;
                ++numRounds;
                ++playerOneLoses;
                ++COMPlayerWins;
            }
        }
    }
    else if (PlayerInput == 5) { // 5 Rounds
        while (numRounds <= 5) {
            cout << "'Choose (1) for Rock, (2) for Paper, or (3) for scissors.'" << endl;
            cout << "One, two, three, shoot!" << endl;
            cin >> PlayerInput;
            switch (PlayerInput) {
                case 1:
                    cout << "Rock" << endl;
                    break;
                case 2:
                    cout << "Paper" << endl;
                    break;
                case 3:
                    cout << "Scissors" << endl;
                    break;
                case 4:
                    cout << "Invalid answer. Ending Program." << endl;
                    return 0;
            }
            COM.SetAnswer(1);
            COM.GetAnswer();
            switch(COM.GetAnswer()) {
                case 1:
                    cout << "Rock" << endl;
                    break;
                case 2:
                    cout << "Paper" << endl;
                    break;
                case 3:
                    cout << "Scissors" << endl;
                    break;
            }
                
            if (COM.GetAnswer() == PlayerInput) {
                cout << "Tie" << endl;
            }
            else if (COM.GetAnswer() == 1 && PlayerInput == 2) {
                //COM is Rock and Player is Paper
                cout << "Round Won" << endl;
                ++numRounds;
                ++playerOneWins;
                ++COMPlayerLoses;
            }
            else if (COM.GetAnswer() == 1 && PlayerInput == 3) {
                // COM is Rock and Player is Scissors.
                cout << "Round Lost" << endl;
                ++numRounds;
                ++playerOneLoses;
                ++COMPlayerWins;
            }
            else if (COM.GetAnswer() == 2 && PlayerInput == 1) {
                // COM is Paper and Player is Rock.
                cout << "Round Lost" << endl;
                ++numRounds;
                ++playerOneLoses;
                ++COMPlayerWins;
            }
            else if (COM.GetAnswer() == 2 && PlayerInput == 3) {
                // COM is Paper and Player is Scissors.
                cout << "Round Won" << endl;
                ++numRounds;
                ++playerOneWins;
                ++COMPlayerLoses;
            }
            else if (COM.GetAnswer() == 3 && PlayerInput == 1) {
                // COM is Scissors and Player is Rock.
                cout << "Round Won" << endl;
                ++numRounds;
                ++playerOneWins;
                ++COMPlayerLoses;
            }
            else if (COM.GetAnswer() == 3 && PlayerInput == 2) {
                // COM is Scissors and Player is Paper.
                cout << "Round Lost" << endl;
                ++numRounds;
                ++playerOneLoses;
                ++COMPlayerWins;
            }
        }
    }
    else if (PlayerInput == 7) { // 7 Rounds
        while (numRounds <= 7) {
            cout << "'Choose (1) for Rock, (2) for Paper, or (3) for scissors.'" << endl;
            cout << "One, two, three, shoot!" << endl;
            cin >> PlayerInput;
            switch (PlayerInput) {
                case 1:
                    cout << "Rock" << endl;
                    break;
                case 2:
                    cout << "Paper" << endl;
                    break;
                case 3:
                    cout << "Scissors" << endl;
                    break;
                case 4:
                    cout << "Invalid answer. Ending Program." << endl;
                    return 0;
            }
            COM.SetAnswer(1);
            COM.GetAnswer();
            switch(COM.GetAnswer()) {
                case 1:
                    cout << "Rock" << endl;
                    break;
                case 2:
                    cout << "Paper" << endl;
                    break;
                case 3:
                    cout << "Scissors" << endl;
                    break;
            }
                
            if (COM.GetAnswer() == PlayerInput) {
                cout << "Tie" << endl;
            }
            else if (COM.GetAnswer() == 1 && PlayerInput == 2) {
                //COM is Rock and Player is Paper
                cout << "Round Won" << endl;
                ++numRounds;
                ++playerOneWins;
                ++COMPlayerLoses;
            }
            else if (COM.GetAnswer() == 1 && PlayerInput == 3) {
                // COM is Rock and Player is Scissors.
                cout << "Round Lost" << endl;
                ++numRounds;
                ++playerOneLoses;
                ++COMPlayerWins;
            }
            else if (COM.GetAnswer() == 2 && PlayerInput == 1) {
                // COM is Paper and Player is Rock.
                cout << "Round Lost" << endl;
                ++numRounds;
                ++playerOneLoses;
                ++COMPlayerWins;
            }
            else if (COM.GetAnswer() == 2 && PlayerInput == 3) {
                // COM is Paper and Player is Scissors.
                cout << "Round Won" << endl;
                ++numRounds;
                ++playerOneWins;
                ++COMPlayerLoses;
            }
            else if (COM.GetAnswer() == 3 && PlayerInput == 1) {
                // COM is Scissors and Player is Rock.
                cout << "Round Won" << endl;
                ++numRounds;
                ++playerOneWins;
                ++COMPlayerLoses;
            }
            else if (COM.GetAnswer() == 3 && PlayerInput == 2) {
                // COM is Scissors and Player is Paper.
                cout << "Round Lost" << endl;
                ++numRounds;
                ++playerOneLoses;
                ++COMPlayerWins;
            }
        }
    }
    else { // Default termination of the program.
        cout << "Invalid answer. Ending Program." << endl;
        return 0;
    }
    while (true){
        if (playerOneWins > COMPlayerWins) {
            cout << "Player's Wins: " << playerOneWins << endl;
            cout << "COM Player's Wins: " << COMPlayerWins << endl;
            cout << "You win!" << endl;
            cout << "Please restart the program to play again." << endl;
        }
        else {
            cout << "Player's Wins: " << playerOneWins << endl;
            cout << "COM Player's Wins: " << COMPlayerWins << endl;
            cout << "You lose!" << endl;
            cout << "Please restart the program to play again." << endl;
        }
    return 0;
    }
}
    