/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 1, 2017, 4:30 PM
 * Purpose:  Calculate the percentage Gas Tax on a gallon of gas, and the percentage profit made from a gallon of gas given
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
    double length1, length2, width1, width2, area1, area2;

    //Initialize variables
    
    //Input data
    cout<<"Enter the length for Rectangle 1: ";
    cin>>length1;
    cout<<"Enter the width for Rectangle 1: ";
    cin>>width1;
    cout<<"Enter the length for Rectangle 2: ";
    cin>>length2;
    cout<<"Enter the width for Rectangle 2: ";
    cin>>width2;
    //Map inputs to outputs or process the data
    area1=length1*width1;
    area2=length2*width2;
    cout<<"*****************************************************************\n";
    //Output the transformed data
    
    if(area1 > area2)
    cout << "The area of Rectangle 1 is greater than the area of Rectangle 2\n";
    else 
        if(area2 > area1)
    cout << "The area of Rectangle 2 is greater than the area of Rectangle 1\n";
     else 
         if(area1 == area2)
    cout << "The area of both Rectangles are the same!\n";
    cout<<"*****************************************************************";  
    
    //Exit stage right!
    return 0;
}

