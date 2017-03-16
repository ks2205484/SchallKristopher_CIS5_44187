/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on February 28, 2017, 3:15 PM
 * Purpose:  Miles Per Gallon
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double galGas=15; // Gallons of gas car holds
    double milTrvl=375; // Miles Traveled before refueling
    double MPG=milTrvl/galGas; // Miles Per Gallon
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"A car with a "<<galGas<<" gallon gas tank that travels "<<milTrvl<<" miles before needing to refuel gets \n"<<MPG<<" miles per gallon"<<endl;
    //Exit stage right!
    return 0;
}

