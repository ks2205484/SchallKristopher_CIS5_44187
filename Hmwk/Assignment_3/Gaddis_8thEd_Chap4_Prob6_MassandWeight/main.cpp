/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 19, 2017, 5:30 PM
 * Purpose: Calculate the weight of an object in Newtons
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
    double mass, weight;
    //Initialize variables
    
    //Input data
    cout<<"Enter an object's Mass (in Kilograms): ";
    cin>>mass;
    //Map inputs to outputs or process the data
    weight=mass*9.8;
    //Output the transformed data
    cout<<"**********************************\n";
    if(weight>1000)
    {cout<<"The object's Mass is too Heavy \n";}
    if(weight<10)
    {cout<<"The object's Mass is too Light \n";}
    if(weight>=10&&weight<=1000)
    {cout<<"The Weight is: "<<weight<<" Newtons \n";}
    cout<<"**********************************";
    //Exit stage right!
    return 0;
}

