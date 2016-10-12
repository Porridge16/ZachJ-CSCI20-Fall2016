#include <iostream>
using namespace std;

int main(){
    int hours = 1;
    int minutes = 0;
    const string PROMPT_TIME = "Enter the time replacing the colon with a space.";
    
    while (true){
    cout << PROMPT_TIME << endl;
    cin >> hours >> minutes;
    
        while (hours < 3){
              while (minutes < 60){
                  cout << hours << ":" << minutes << " is now the time." << endl;
                ++minutes;
                if (minutes == 60){
                    ++hours;
                }
            }
        break;
        }
    }
}