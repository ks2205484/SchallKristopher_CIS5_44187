/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 9, 2017, 5:15 PM
 * Purpose:  Calculate the percentage Gas Tax on a gallon of gas, and the percentage profit made from a gallon of gas given
 */

//System Libraries
#include <iostream> 
#include <iomanip> 
#include <string>//Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string month1, month2, month3;
    double rain1, rain2, rain3;
    double average;
    //Initialize variables
    
    //Input data
    cout<<"Enter the name of the month: ";
    cin>>month1;
    cout<<"Enter the amount of rainfall (in inches): ";
    cin>>rain1;
    cout<<"Enter the name of the month: ";
    cin>>month2;
    cout<<"Enter the amount of rainfall (in inches): ";
    cin>>rain2;
    cout<<"Enter the name of the month: ";
    cin>>month3;
    cout<<"Enter the amount of rainfall (in inches): ";
    cin>>rain3;
    //Map inputs to outputs or process the data
    average=(rain1+rain2+rain3)/3;
    //Output the transformed data
    cout<<setprecision(2)<<fixed;
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "<<month3<<" is: "<<average<<endl;
    
    //Exit stage right!
    return 0;
}

