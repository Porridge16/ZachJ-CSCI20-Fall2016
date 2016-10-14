#include <iostream>
using namespace std;

int main(){
    int hours = 1;
    int minutes = 0;
    // const string PROMPT_TIME = "Enter the time replacing the colon with a space.";
    
    // while (true){
    // cout << PROMPT_TIME << endl;
    // cin >> hours >> minutes;
    
    while (hours < 3){
        while (minutes < 60){
            cout << hours << ":" << minutes << " is now the time." << endl;
            ++minutes;
        }
        if (minutes == 60){
            minutes = 0;
            ++hours;
        }
            // cout<<hours;
        // break;
    // }
    }
    
    int startHour = 0;
    int endHour = 0;
    while (true){
        cout << "What will be your starting hour?" << endl;
        cin >> startHour;
        cout << "What will be your ending hour?" << endl;
        cin >> endHour;
        
        while (startHour < endHour){
            cout << startHour << ":00" << endl;
            cout << startHour << ":15" << endl;
            cout << startHour << ":30" << endl;
            cout << startHour << ":45" << endl;
            ++startHour;
            
            if (startHour < 12 && endHour > 0){
                cout << startHour << ":00" << endl;
                cout << startHour << ":15" << endl;
                cout << startHour << ":30" << endl;
                cout << startHour << ":45" << endl;
                ++startHour;
            }
        }
    }
}