/* 
  File:   main.cpp
  Author: Kristopher, Schall
  Created on February 28, 2017, 12:15 PM
  Purpose:  Sales Prediction
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
    double cmpSls=8.6; //Company Sales
    double ecsPer=.58; //East Coast Sales Percentage
    double ecsTot;
    //Input values
    
    //Process by mapping inputs to outputs
    ecsTot=cmpSls*ecsPer; //East Coast Division Total Sales
    //Output values
    cout<<"East Coast Yearly Sales= $  "<<ecsTot <<" million" <<endl;
    //Exit stage right!
    return 0;
}