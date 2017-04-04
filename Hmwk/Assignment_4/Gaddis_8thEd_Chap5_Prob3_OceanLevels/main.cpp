/* 
 * File:   main.cpp
 * Author: Kristopher Schall
 * Created on April 1, 2017, 11:30 AM
 * Purpose:  Calculate the Rise in Ocean levels over a 25 year span.
 */

//System Libraries
#include <iostream>
#include <iomanip>
//Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int Year;
    double Risen = 0.0;
	
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout<<"Table showing the total number of millimeters the oceans\n";
    cout<<"will have risen each year for the next 25 years.\n\n";
    cout<<"    Year        Amount Risen\n";
    cout<<"                (millimeters)\n";
    cout<<"-----------------------------\n";
    for(Year = 1; Year <= 25; Year++)
	{
		Risen += 1.5;
		cout << right << fixed << showpoint << setprecision(1)
		     << setw(7) << Year << setw(16) << Risen << endl;
	}

    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

