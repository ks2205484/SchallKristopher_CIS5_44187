/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 9, 2017, 4:30 PM
 * Purpose: Calculate Miles Per Gallon
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
    int capacity,miles,average;
    //Initialize variables
    
    //Input data
    cout<<"Enter the number of size of the tank (gallons): ";
    cin>>capacity;
    cout<<"Enter the number of miles per tank of gas: ";
    cin>>miles;
    //Map inputs to outputs or process the data
    average=miles/capacity;
    //Output the transformed data
    cout<<"The car's MPG is: "<< average << endl << endl;
    
    
    //Exit stage right!
    return 0;
}

