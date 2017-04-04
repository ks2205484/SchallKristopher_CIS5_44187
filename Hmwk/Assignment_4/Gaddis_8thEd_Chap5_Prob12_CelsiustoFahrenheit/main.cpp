/* 
  File:   main.cpp
  Author: Kristopher Schall 
  Created on April  1, 2017, 3:30 PM
  Purpose:  Celsius to Fahrenheit Table.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    double Cel, Fahr;
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"The Table of Celsius temperatures from 0\n";
    cout<<"to 20 and their Fahrenheit equivalents:\n\n";
    cout<<"Celsius     Fahrenheit\n";
    cout<<"----------------------\n";

    for(Cel=0;Cel<=20; Cel++)
    {
    Fahr=(1.8 * Cel)+32;
    cout<<right<<setw(4)<<Cel;
    cout<<setw(14)<<Fahr<<endl;
    }
    //Exit stage right!
    return 0;
}