/* 
 * File:   main.cpp
 * Author: Kristopher Schall
 * Created on February 28, 2017, 12:45 PM
 * Purpose:  Restaurant Bill
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
    double mChrg=88.67; // Meal Charge
    double mTax=.0675*mChrg; // Meal Tax
    double mTip=(mTax+mChrg)*.20; // 20% tip after tax
    double total= mChrg+mTax+mTip; // Total bill
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"The meal cost is $"<<mChrg<<endl;
    cout<<"The tax amount is $"<<mTax<<endl;
    cout<<"The tip amount is $"<<mTip<<endl;
    cout<<"The total bill is $"<<total<<endl;
    //Exit stage right!
    return 0;
}

