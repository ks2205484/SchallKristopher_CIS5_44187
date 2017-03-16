/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on February 28, 2017, 1:30 PM
 * Purpose:  Annual Pay
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
    double payAmount=2200.0; // Amount of pay
    double payPeriods=26; // Pay Periods in a year
    double annualPay=payAmount*payPeriods; // Annual Pay
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"The employee gets paid $"<<payAmount<<" each pay period."<<endl;
    cout<<"There are "<<payPeriods<<" pay periods in a year"<<endl;
    cout<<"The employee's total annual pay is $"<<annualPay<<endl;
    //Exit stage right!
    return 0;
}

