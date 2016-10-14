#include <iostream>
using namespace std;

int minutes = 0;

int main(){
    for (int hours = 1; hours < 3;){
        while (minutes < 60){
            cout << hours << ":" << minutes << " is now the time." << endl;
            ++minutes;
        }
        if (minutes == 60){
        minutes = 0;
        ++hours;
        }
    }
}