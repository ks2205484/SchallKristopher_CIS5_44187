/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on April 1, 2017, 5:00 PM
  Purpose:  Random Number Guessing Game.
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int RandNum, Seed, Guess;
    Seed = time(0);
    srand(Seed);
    RandNum = 1 + rand() % 100; 

    cout<<"\nA random number has been generated between 1 and 100\n";
    cout<<"Can you guess what my number is? ";
    cin  >> Guess;

    while (Guess > RandNum)
    {
    cout<<"Too high. Try again.\n";
    cin>>Guess;
    }
    while (Guess < RandNum)
    {
    cout<<"Too low. Try again.\n";
    cin>>Guess;
    }
    cout<<"Congratulations. You figured out my number.\n\n";
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}