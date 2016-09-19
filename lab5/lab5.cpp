// Zachary Jorgensen
// September 8th 2016

#include <iostream>
#include <string>
using namespace std;

struct Monster 
{
    string monsterName;
    string monsterHead;
    string monsterEyes;
    string monsterEars;
    string monsterNose;
    string monsterMouth;
};

int main()
{
    Monster myMonster;
    myMonster.monsterName;
    myMonster.monsterHead;
    myMonster.monsterEyes;
    myMonster.monsterEars;
    myMonster.monsterNose;
    myMonster.monsterMouth;
    
    cout << "Welcome to the 'Create a Monster Machine'! First let's start with a name. What will you name your monster?" << endl;
    cin >> myMonster.monsterName;
    cout << myMonster.monsterName << "... What a fabulous name! We can now start building your " << myMonster.monsterName << endl;
    
    cout << "There are 6 different types of monster attributes to mix and match with." << endl;
    cout << "The options are:" << endl;
    cout << "Franken" << endl << "Happy" << endl << "Zombus" << endl << "Spritem" << endl << "Wackus" << endl << "Vegitas" << endl;
    
    cout << "What type of head would you like?" << endl;
    cin >> myMonster.monsterHead;
    cout << "Great choice! Now what kind of eyes would you like " << myMonster.monsterName << " to have?" << endl;
    cin >> myMonster.monsterEyes;
    cout << "What about " << myMonster.monsterName << "'s ears?" << endl;
    cin >> myMonster.monsterEars;
    cout << "Your monster is really starting to take form now! What about your monster's nose?" << endl;
    cin >> myMonster.monsterNose;
    cout << "We are almost done! Last, what about his mouth?" << endl;
    cin >> myMonster.monsterMouth;
    cout << "Wonderful! " << myMonster.monsterName << "Looks outstanding!" << endl;
    cout << "Are you sure you want these attributes?" << endl;
    cout << "Head: " << myMonster.monsterHead << endl << "Eyes: " << myMonster.monsterEyes << endl;
    cout << "Ears: " << myMonster.monsterEars << endl << "Nose: " << myMonster.monsterNose << endl << "Mouth: " << myMonster.monsterMouth << endl;
    cout << "Great! Well enjoy your new monster, comeback if " << myMonster.monsterName << " would like a friend!" << endl;
}



//Name: OneMonster
//Head: Zombus
//Eyes: Spritem
//Ears: Vegitas
//Nose: None
//Mouth: Wackus
