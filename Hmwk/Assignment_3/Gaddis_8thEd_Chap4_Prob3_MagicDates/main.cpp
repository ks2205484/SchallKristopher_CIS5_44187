/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 19, 2017, 4:30 PM
 * Purpose:  Determine whether the Date is a Magical Date which means the Day times the month equals the year
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
    int month,day,year;
    //Initialize variables
    
    //Input data
    cout<<"Enter the Month in numeric form: ";
    cin>>month;
    cout<<"Enter the Day (1-31): ";
    cin>>day;
    cout<<"Enter the Two-Digit Year: ";
    cin>>year;
    //Map inputs to outputs or process the data
    cout<<"*****************************\n";
    //Output the transformed data
    if (month*day==year)
        cout<<"The Date is Magical!"<<endl;
    else
        cout<<"The Date is Not Magical!"<<endl;
            
    cout<<"*****************************\n";
    //Exit stage right!
    return 0;
}

