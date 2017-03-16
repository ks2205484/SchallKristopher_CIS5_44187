/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 9, 2017, 5:45 PM
 * Purpose:How Many Calories are consumed.
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
    double cookies, totalCal;
    //Initialize variables
    
    //Input data
    cout<<"Enter the number of cookies you ate: ";
    cin>>cookies;
    //Map inputs to outputs or process the data
    totalCal=cookies*100; //each cookie has 100 calories per cookie.
    //Output the transformed data
    cout<<"You consumed: "<<totalCal<<" calories."<<endl;
    //Exit stage right!
    return 0;
}

