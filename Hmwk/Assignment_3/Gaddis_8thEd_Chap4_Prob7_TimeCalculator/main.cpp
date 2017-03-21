/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 19, 2017, 6:00 PM
 * Purpose: Calculate the time by entering in seconds
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
     double seconds,hour,day;
    hour=3600;
    day=86400;
    //Initialize variables
    
    //Input data
    cout<<"Enter the number of Seconds: ";
    cin>>seconds;

    //Map inputs to outputs or process the data
    cout<<"****************************************************\n";
    cout<<setprecision(2)<<fixed;
 if(seconds>=86400)
 cout<<"The Seconds you entered = " <<seconds/86400<<" days \n";
 else
 {
    if(seconds>=3600)
{cout<<"The Seconds you entered = "<<seconds/3600<<" hours \n";}
 else
 {
    if(seconds>=60)
{cout<<"The Seconds you entered = "<<seconds/60<<" minutes \n";}
 else
 {
    if(seconds<60&&seconds>0)
{cout<<"The Seconds you entered = "<<seconds<<" seconds \n";}
 else
     if(seconds<0)
{cout<<"You must enter a number larger than 0 \n";}
 }
 }
 }
    cout<<"*****************************************************";
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

