/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 19, 2017, 7:00 PM
 * Purpose: Calculate Bank Fees
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
    int checks;
    double beginningBalance, feeOne, feeTwo, totalFees;
    //Initialize variables
    
    //Input data
    cout<<"Enter beginning balance: $";
    cin>>beginningBalance;

    cout<<setprecision(2)<<fixed;
    if(beginningBalance < 0)
    cout<<"URGENT MESSAGE!! YOUR ACCOUNT IS OVERDRAWN!! \n\n";
    else
    {
    cout<<"Enter number of checks written: ";
    cin>>checks;
    //Map inputs to outputs or process the data
    if(beginningBalance<400)
    feeOne=15.00;
    else
    feeOne=0.00;

    if(checks>=0&&checks<20)
    feeTwo=checks*0.10;
    if(checks>=20&&checks<=39)
    feeTwo=checks*0.08;
    if(checks>=40&&checks<=59)
    feeTwo=checks*0.06;
    if(checks>=60)
    feeTwo = checks*0.04;
    if(checks<0)
    cout<<"The number of checks CANNOT be negative\n";

    totalFees = feeOne + feeTwo;
    //Output the transformed data
    cout<<"\n++++++++++++++++\n";
    cout<<"   Monthly Fees";
    cout<<"\n++++++++++++++++\n";
    cout<<"Low Balance fee: $"<<feeOne<<endl;
    cout<<"Check fees: $"<<feeTwo<<endl;
    cout<<"Total Monthly fees: $"<<totalFees<<"\n";
 }
    //Exit stage right!
    return 0;
}

