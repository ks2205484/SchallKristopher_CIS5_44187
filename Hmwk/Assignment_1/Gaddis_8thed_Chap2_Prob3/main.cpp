/* 
 * File:   main.cpp
 * Author: Kristopher, Schall
 * Created on February 28, 2017, 12:32 PM
 * Purpose: Sales Tax
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
    double purTot=95; //Total Purchase Price
    double stTax=.04*purTot; //State Sales Tax
    double cntTax=.02*purTot; //County Sales Tax
    double ttlTax=stTax+cntTax; //Total Sales Tax
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"The total sales tax on a $"<<purTot<<" purchase is $"<<ttlTax<<endl;
    //Exit stage right!
    return 0;
}

