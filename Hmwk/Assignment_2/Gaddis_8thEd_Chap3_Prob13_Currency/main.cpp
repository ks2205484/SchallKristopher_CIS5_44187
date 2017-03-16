/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 9, 2017, 7:00 PM
 * Purpose: Calculate Dollars to Yen and Euros
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
    const double YEN_PER_DOLLAR=98.93;
    const double EUROS_PER_DOLLAR=0.74;
    double dollars,yen,euros;
    //Initialize variables
    
    //Input data
    cout<<setprecision(2)<<fixed;
    cout<<"Enter dollar amount: ";
    cin>>dollars;
    //Map inputs to outputs or process the data
    yen=dollars*YEN_PER_DOLLAR;
    euros=dollars*EUROS_PER_DOLLAR;
    //Output the transformed data
    cout<<"-------Conversion-------\n";
    cout<<"$"<<dollars<<" = "<<yen<<" Yen\n";
    cout<<"$"<<dollars<<" = "<<euros<<" Euros"<<endl;
    //Exit stage right!
    return 0;
}

