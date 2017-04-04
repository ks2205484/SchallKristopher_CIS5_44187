/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on April 1, 2017, 12:30 PM
  Purpose:  Calculate the calories burned over a period of time.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    
    const double calories_per_min=3.6;
    int Min, Burnt=0; 		

	
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"\nThis table displays the number of calories burnt on a\n";
    cout<<"treadmill that burns 3.6 calories per minute.\n";
    cout<<"\n    Minutes Ran      Calories Burnt\n";
    cout<<"------------------------------------------\n";

    for(Min = 10; Min <= 30; Min += 5)
    {
    Burnt = Min * calories_per_min;
    cout<<"         "<<Min<<"               "<<Burnt<<endl; 
    }
    cout<<endl;   
    //Exit stage right!
    return 0;
}