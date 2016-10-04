// Zachary Jorgensen
// 9/22/16

// Old McDonald
// For reference on the actually vocalization of a fox listen here:
// https://www.youtube.com/watch?v=jofNR_WkoCE

#include <iostream>
using namespace std;

void verse (string animal)
{
    cout << "Old MACDONALD had a farm," << endl;
    cout << "E-I-E-I-O." << endl;
    cout << "And on his farm he had a " << animal << "," << endl;
    cout << "E-I-E-I-O." << endl;
    
}

void chorus (string noise)
{
    cout << "With a " << noise << " " << noise << " here" << endl;
    cout << "and a " << noise << " " << noise << " there." << endl;
    cout << "Here a " << noise << ", there a " << noise << "," << endl;
    cout << "everywhere a " << noise << " " << noise << "." << endl;
    cout << "Old MacDonald had a farm," << endl;
    cout << "E-I-E-I-O" << endl;
    cout << endl;
}

int main ()
{
    verse ("dog");
    chorus ("woof");
    verse ("cow");
    chorus ("moo");
    verse ("fox");
    chorus ("ack-ack-ack-ackawoooo");
}