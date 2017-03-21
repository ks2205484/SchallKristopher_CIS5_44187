/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 19, 2017, 8:30 PM
 * Purpose: Calculate which substances will freeze or boil at a certain temperature.
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
    double temperature;
    //Initialize variables
    
    //Input data
    cout<<"Enter a Temperature in Farenheit: ";
    cin>>temperature;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"***********************************\n";
    cout << "\nSubstances that will freeze: \n";
    if(temperature<= -173)
    cout<<"Ethyl Alcohol \n";
    if(temperature<= -38)
    cout<<"Mercury \n";
    if(temperature <= -362)
    cout<<"Oxygen \n";
    if(temperature <= 32)
    cout<<"Water \n";
    cout<<"\n***********************************\n";
    cout<<"\nSubstances that will boil: \n";
    if(temperature >= 172)
    cout<<"Ethyl Alcohol \n";
    if(temperature>= 676)
    cout<<"Mercury \n";
    if(temperature>= -306)
    cout<<"Oxygen \n";
    if(temperature >= 212)
    cout<<"Water \n";
    cout<<"\n************************************";
    //Exit stage right!
    return 0;
}

