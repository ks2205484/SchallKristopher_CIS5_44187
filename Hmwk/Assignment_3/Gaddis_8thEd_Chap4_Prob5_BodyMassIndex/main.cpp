/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 19, 2017, 5:00 PM
 * Purpose: Calculate if the person is Underweight, good shape or Overweight.
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
    double weight, height, BMI;
    //Initialize variables
    
    //Input data
    cout<<"Enter your weight (in pounds): ";
    cin>>weight;
    cout<<"Enter your height (in inches): ";
    cin>>height;
    //Map inputs to outputs or process the data
    BMI=(weight*703)/(height*height);
    //Output the transformed data
    cout<<"**************************************\n";
    if(BMI<18.5)
    cout<<"You are Underweight! \n";
    if(BMI>=18.5&&BMI<=25)
    cout<<"You are in Great Shape! \n";
    if(BMI>25)
    cout<<"You are Overweight! \n";
    cout<<"**************************************";
    //Exit stage right!
    return 0;
}

