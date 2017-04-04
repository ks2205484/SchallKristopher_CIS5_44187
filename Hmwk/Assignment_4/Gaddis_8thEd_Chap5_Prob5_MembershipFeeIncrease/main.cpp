/* 
  File:   main.cpp
  Author: Kristopher Schall
  Created on April 1, 2017, 12:00 PM
  Purpose: Calculate the projected membership rates at a country club.
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
    	const double rate = 0.04, current_charge = 2500.0;
	int Year;
	double YrRate;
    //Input values
    
    //Process by mapping inputs to outputs
    cout << "\nCountry club projected membership rates\n";
    cout<<"    for the next six years\n";
    cout<<"-----------------------------\n";
    cout<<"      Year       Rate\n";
    cout<<"-----------------------------\n";

    for(Year=1;Year<=6;Year++)
    {
    YrRate=current_charge*(1+Year*rate);
    cout<<"       "<<Year<<"         "<<YrRate<<endl;
    }
    cout<<endl;
    //Output values

    //Exit stage right!
    return 0;
}