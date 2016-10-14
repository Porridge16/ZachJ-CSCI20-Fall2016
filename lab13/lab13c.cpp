#include <iostream>
#include <string>
using namespace std;

int main(){
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