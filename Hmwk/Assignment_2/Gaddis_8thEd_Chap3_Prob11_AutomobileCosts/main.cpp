/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 9, 2017, 6:00 PM
 * Purpose: Calculate Operating costs of vehicle.
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
    double loanPymt, insurance, gas, oil, tires, maint;
    double monthlyTot, annualTot;
    //Initialize variables
    
    //Input data
    cout<<"Enter your monthly loan payment: ";
    cin>>loanPymt;
    cout<<"Enter your monthly insurance: ";
    cin>>insurance;
    cout<<"Enter your monthly gas expense: ";
    cin>>gas;
    cout<<"Enter your monthly oil expenses: ";
    cin>>oil;
    cout<<"Enter your monthly tires expenses: ";
    cin>>tires;
    cout<<"Enter your monthly maintenance expenses: ";
    cin>>maint;
    //Map inputs to outputs or process the data
    monthlyTot=loanPymt+insurance+gas+oil+tires+maint;
    annualTot=monthlyTot*12;
    //Output the transformed data
    cout<<setprecision(2)<<fixed;
    cout<<"****************************************************\n";
    cout<<"Your total monthly expenses are: $"<<monthlyTot<<endl;
    cout<<"Your total annual expenses are: $"<<annualTot<<endl;
    //Exit stage right!
    return 0;
}

