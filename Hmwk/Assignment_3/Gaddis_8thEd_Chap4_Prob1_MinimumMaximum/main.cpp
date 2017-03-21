/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on March 19, 2017, 3:30 PM
 * Purpose:  Determine which number is smaller or larger
 */

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double num1,num2;
    //Initialize variables
    
    //Input data
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    
    //Map inputs to outputs or process the data
    if (num1>num2)
        cout<<"The Larger Number is: "<<num1<<endl;
    else
        cout<<"The Larger Number is: "<<num2<<endl;
   
    if (num1<num2)
        cout<<"The Smaller Number is: "<<num1<<endl;
    else
        cout<<"The Smaller Number is: "<<num2<<endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

