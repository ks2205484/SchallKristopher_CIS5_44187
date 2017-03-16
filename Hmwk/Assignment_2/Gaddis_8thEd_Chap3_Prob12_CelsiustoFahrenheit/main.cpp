/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 9, 2017, 6:15 PM
 * Purpose:Calculating Celsius to Fahrenheit
 */

//System Libraries
#include <iostream> 
#include <iomanip> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double celsius, conversion;
    //Initialize variables
    
    //Input data
    cout<<"Enter Celsius Temperature: ";
    cin>>celsius;
    //Map inputs to outputs or process the data
    conversion=(1.8*celsius)+32;
    //Output the transformed data
    cout<<celsius<<" Degrees Celsius= "<<conversion<<" Degrees Fahrenheit"<<endl;
    //Exit stage right!
    return 0;
}

