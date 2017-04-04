/* 
 * File:   main.cpp
 * Author: Kristopher Schall
 * Created on April 01, 2017, 11:00 AM
 * Purpose: Calculate the Sum of all integers.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) 
    //Declare variables
    {
    int Test,Sum; 		
    Sum=0;	
    
    //Initialize variables
    cout<<"This program will calculate the sum of all the integers from 1 up to the number you enter.\n";
    cout<<"Enter a positive integer: ";
    cin>>Test;
    //Input data
    if (Test<0)
    {
        cout<<"Input Invalid!\n";
        cout<<"Enter an interger greater than 1: ";
        cin>>Test;
    }
    //Map inputs to outputs or process the data
    if (Test>0)  // Validate that only positive numbers are accepted.
    {
    for(int Num = 1; Num <= Test; Num++)
    {
        Sum += Num;
    }
    cout << "The sum of the integers from 1 up to "<< Test <<" = "<<Sum<< ".\n";
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

