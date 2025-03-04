#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

//Create a struct type named Monster
struct Monster {
    string name;
    int attack;
    int hitpoints;
};

//Create an array of five monsters
Monster monsters[5] = {
    Monster{"Godzilla", 5, 62}, //These values are in the same order as in the struct!
    Monster{"Mothra", 10, 37},
    Monster{"Babadook", 3, 101},
    Monster{"Frankenstein", 2, 23},
    Monster{"ProfessorBill", 1, 3}
};

// This function takes a monster and prints it's name and hitpoints
// to the console, and prints "DEAD" if it has negative HP
void printMonsterStats(Monster m){
    cout << m.name << ": " << m.hitpoints;
    if (m.hitpoints <= 0){
        cout << " DEAD!";
    }
cout << endl;
}

//Fight two monsters!
void fight(Monster &m1, Monster &m2){
    cout << m1.name << " Fights " << m2.name << "!" << endl;
    int round = 0;
    while ( m1.hitpoints > 0 && m2.hitpoints > 0 ){
        round++;
        m1.hitpoints = m1.hitpoints - m2.attack;
        m2.hitpoints = m2.hitpoints - m1.attack;
    }
    if ( m1.hitpoints > 0 && m2.hitpoints < 0 ){
        cout << m1.name << " wins in " << round << " rounds!" << endl;
    } else if ( m1.hitpoints < 0 && m2.hitpoints > 0 ){
        cout << m2.name << " wins in " << round << " rounds!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }
   
}

void main(){

    for(int f = 0; f < 5; f++){
        for(int g = 0; g < 5; g++){
            if( f != g){
                
            fight(monsters[f], monsters[g]);
            
            cout << "FINAL RESULTS" << endl;

            printMonsterStats(monsters[f]);
            printMonsterStats(monsters[g]);
            cout << endl;
                }
            }

        }
      
    }


