/* 
 * File:   main.cpp
 * Author: Kristopher Schall
 * Created on March 22, 2017, 4:00 PM
 * Purpose:  Calculating Paycheck
 */

//System Libraries
#include <iostream>  
#include <iomanip>
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float basePay,payRate,otHrs,hrsWrkd,otRate,wklySal,otPay;
    
    //Input data
    cout<<"This Program will calculate your Total Weekly Salary\n";
    cout<<"****************************************************\n";
    cout<<"Enter in your hourly wage: $";
    cin>>payRate;
    cout<<"Enter in hours worked in a week:";
    cin>>hrsWrkd;
    
    //Map inputs to outputs or process the data
    if(hrsWrkd > 40)
        ;
    {
        basePay=payRate*hrsWrkd;
        otHrs=hrsWrkd>40;
        otRate=payRate*2;
        otPay=otHrs*(payRate*2);
        wklySal=otPay+basePay;
      
    }
    if(hrsWrkd <= 40)
        ;
    {
        basePay=payRate*hrsWrkd;
        wklySal=basePay+otPay;
    }
    
    //Output the transformed data
    cout<<"Your Total Weekly Salary is: $"<<wklySal<<endl;
    //Exit stage right!
    return 0;
}