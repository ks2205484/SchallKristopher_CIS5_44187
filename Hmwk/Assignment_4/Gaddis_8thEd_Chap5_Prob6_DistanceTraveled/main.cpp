/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on April 1, 2017, 1:00 PM
  Purpose:  Calculate the Distance traveled in a set amount of time.
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
    int Speed, Hours, Distance=0;
     //Input values
    cout<<"What is the speed of the vehicle in mph? ";
    cin>>Speed;
    cout<<"How man hours has it traveled? ";
    cin>>Hours;
    //Process by mapping inputs to outputs
    
    //Output values
    if(Speed>=0&&Hours>=1)
    {
    cout<<"  Hour   Distance Traveled\n";
    cout<<"--------------------------------\n";

    for (int X = 1; X <= Hours; X++)
    {
    Distance += Speed;
    cout<<right<<setw(4)<<X<<"        ";
    cout<<setw(6)<<Distance<<endl;
    }
    }
    //Exit stage right!
    return 0;
}