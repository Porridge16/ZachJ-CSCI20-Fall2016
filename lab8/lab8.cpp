#include <iostream>
using namespace std;

double computePoundstoKilos(double pounds)
{
    return pounds * (1.0/2.2);
}

double computeKilostoPounds(double kilos)
{
    return kilos * 2.2;
}

main ()
{
    int userChoice = 0;
    double userPounds = 0;
    double userKilos = 0;
    
    cout << "NOTE: Enter the number that corresponds with the statement in front of it." << endl;
    cout << "Would you like to compute (1)Pounds to Kilograms or (2)Kilograms to Pounds?" << endl;
    
    cin >> userChoice;
    
    if (userChoice == 1)
    {
        cout << "Please enter the amount of Pounds you would like to convert." << endl;
        cin >> userPounds;
        
        userKilos = computePoundstoKilos(userPounds);
        
        cout << userKilos;
    }
    
    else
    {
        cout << "Please enter the amount of Kilos you would like to convert." << endl;
        cin >> userKilos;
        
        userPounds = computeKilostoPounds(userKilos);
        
        cout << userPounds;
    }
    
    return (0);
}