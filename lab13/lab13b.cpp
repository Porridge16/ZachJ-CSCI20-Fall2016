#include <iostream>
#include <string>
using namespace std;

void startTimeOfDay(string start){
    if (start == "AM"){
        cout << " AM" << endl;
    }
    else {
        cout << " PM" << endl;
    }
}
void endTimeOfDay(string end){
    if (end == "AM"){
        cout << " AM" << endl;
    }
    else {
        cout << " PM" << endl;
    }
}

int main(){
    int startHour = 0;
    int endHour = 0;
    string startTimeDay = "U";
    string endTimeDay = "U";
    
    while (true){
        cout << "What will be your starting hour?" << endl;
        cin >> startHour;
        cout << "AM or PM?" << endl;
        cin >> startTimeDay;
        cout << "What will be your ending hour?" << endl;
        cin >> endHour;
        cout << "AM or PM?" << endl;
        cin >> endTimeDay;
        
            while (startHour < endHour){
                cout << startHour << ":00" << endl;
                cout << startHour << ":15" << endl;
                cout << startHour << ":30" << endl;
                cout << startHour << ":45" << endl;
                ++startHour;
            }
    }
}